#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

// Структура для хранения достопримечательностей

typedef struct
{
    char name[50];      // название достопримечательности

    int year;           // год создания

} Attraction;

// Структура для списка достопримечательностей города

typedef struct {

    Attraction* attractions;    // динамический массив достопримечательностей

    int count;                  // количество достопримечательностей
    int capacity;               // вместимость массива

} AttractionList;

// Структура для города

typedef struct {

    char name[50];              // название города

    char country[50];           // страна

    AttractionList attractions; // список достопримечательностей

} City;

// Функции для работы со списком достопримечательностей

void attraction_list(AttractionList* al) {

    al->count = 0;
    al->capacity = 5;
    al->attractions = (Attraction*)malloc(al->capacity * sizeof(Attraction));

}

// Если массив заполнен, увеличиваем его размер

void add_attraction(AttractionList* al, const char* name, int year) {
    
    if (al->count >= al->capacity) {

        al->capacity *= 2;
        al->attractions = (Attraction*)realloc(al->attractions, al->capacity * sizeof(Attraction));

    }

    strcpy(al->attractions[al->count].name, name);

    al->attractions[al->count].year = year;
    al->count++;
}

void free_attraction_list(AttractionList* al) {

    free(al->attractions);

    al->attractions = NULL;
    al->count = 0;
    al->capacity = 0;
}

// Функции для работы с городами

City* create_cities(int n) {

    City* cities = (City*)malloc(n * sizeof(City));

    for (int i = 0; i < n; i++) 
    {

        attraction_list(&cities[i].attractions);
    }

    return cities;
}

City* city_with_most_attractions(City* cities, int n) {
    if (n <= 0) return NULL;

    City* most = &cities[0];

    for (int i = 1; i < n; i++) {

        if (cities[i].attractions.count > most->attractions.count) 
        {
            most = &cities[i];
        }
    }

    return most;
}

void print_city(const City* city) {

    printf("Город: %s, Страна: %s\n",city->name, city->country);
    printf("Количество достопримечательностей: %d\n", city->attractions.count);

    if (city->attractions.count > 0)
    {
        printf("Достопримечательности:\n");

        for (int i = 0; i < city->attractions.count; i++)
        {
            printf("  - %s (год создания: %d)\n", city->attractions.attractions[i].name, city->attractions.attractions[i].year);
        }
    }
    else 
    {

        printf("Достопримечательностей нет\n");

    }
    printf("\n");
}

void free_cities(City* cities, int n) {
    for (int i = 0; i < n; i++) 
    {

        free_attraction_list(&cities[i].attractions);

    }

    free(cities);
}

void clear_input_buffer() {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
    if (str != NULL) 
    {
        size_t len = strlen(str);

        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }
    }
}

int main(int argc, char** argv) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n = 0;

    printf("Введите количество городов: ");
    scanf("%d", &n);

    clear_input_buffer();

    City* cities = create_cities(n);

    // Ввод данных о городах

    for (int i = 0; i < n; i++)
    {
        printf("\nГород %d:\n", i + 1);

        printf("Название города: ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);

        clear_last_linebreak(cities[i].name);

        printf("Страна: ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);

        clear_last_linebreak(cities[i].country);

        int attraction_count = 0;
        printf("Количество достопримечательностей: ");
        scanf("%d", &attraction_count);

        clear_input_buffer();

        printf("Введите %d достопримечательностей:\n", attraction_count);

        for (int j = 0; j < attraction_count; j++) 
        {
            char name[50];
            int year = 0;

            printf("Достопримечательность %d:\n", j + 1);
            printf("  Название: ");
            fgets(name, sizeof(name), stdin);

            clear_last_linebreak(name);

            printf("  Год создания: ");
            scanf("%d", &year);

            clear_input_buffer();

            add_attraction(&cities[i].attractions, name, year);
        }
    }

    // Вывод всех городов

    printf("\nВсе города:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("\n%d. ", i + 1);
        print_city(&cities[i]);
    }

    // Поиск города с наибольшим количеством достопримечательностей

    City* most = city_with_most_attractions(cities, n);
    if (most)
    {
        printf("\nГород с наибольшим количеством достопримечательностей:\n");
        print_city(most);
    }

    free_cities(cities, n);



    return 0;
}