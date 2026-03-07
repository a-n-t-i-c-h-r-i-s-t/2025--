#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

class ArrayList
{
public:
    double* data;
    int size;
    int capacity;

    ArrayList()
    {
        size = 0;
        capacity = 4;
        data = new double[capacity];
    }

    ~ArrayList()
    {
        delete[] data;
    }

    void resize(int newCapacity)
    {
        double* newData = new double[newCapacity];
        for (int i = 0; i < size; i++)
        {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

    void add(double value)
    {
        if (size == capacity)
        {
            resize(capacity * 2);
        }
        data[size] = value;
        size++;
    }

    double get(int index)
    {
        if (index < 0 || index >= size)
        {
            printf("Ошибка: индекс %d вне [0,%d] \n", index, size);
            return 0.0;
        }
        return data[index];
    }

    void set(int index, double value)
    {
        if (index < 0 || index >= size)
        {
            printf("Ошибка: индекс %d вне [0,%d] \n", index, size);
            return;
        }
        data[index] = value;
    }

    void remove(int index)
    {
        if (index < 0 || index >= size)
        {
            printf("Ошибка: индекс %d вне диапазона \n", index);
            return;
        }
        for (int i = index; i < size - 1; i++)
        {
            data[i] = data[i + 1];
        }
        --size;
    }

    int getSize()
    {
        return size;
    }

    void print()
    {
        std::cout << "[";
        for (int i = 0; i < size; i++)
        {
            std::cout << data[i];
            if (i < size - 1) std::cout << ", "; 
        }
        std::cout << "]" << std::endl;
    }

    void insert(int index, double value)
    {
        if (index < 0 || index > size)
        {
            
            printf("Ошибка: индекс %d вне [0,%d] \n", index, size);
            return;
        }
        if (size == capacity)
        {
            resize(capacity * 2);
        }
        for (int i = size; i > index; i--)
        {
            data[i] = data[i - 1];
        }
        data[index] = value;
        size++;
    }

    void clear()
    {
        size = 0;
    }

    bool contains(double value)
    {
        for (int i = 0; i < size; i++)
        {
            if (data[i] == value)
            return true;
        }
        return false;
    }
};

int main(int argc, char** argv)
{
    ArrayList List;
    List.add(3.14);
    List.add(2.71);

    List.print(); 

    FILE* file = fopen("list.bin", "wb");
    if (file)
    {
        fwrite(&List.size, sizeof(int), 1, file);
        fwrite(&List.capacity, sizeof(int), 1, file);
        fwrite(List.data, sizeof(double), List.size, file);
        fclose(file);
    }

    ArrayList newList;
    file = fopen("list.bin", "rb");
    if (file)
    {
        int readSize, readCapacity;
        fread(&readSize, sizeof(int), 1, file);
        fread(&readCapacity, sizeof(int), 1, file);

        delete[] newList.data;
        newList.data = nullptr; 
        newList.data = new double[readCapacity]; 
        newList.size = readSize;
        newList.capacity = readCapacity;

        fread(newList.data, sizeof(double), readSize, file);
        fclose(file);

        newList.print(); 
    }

    return 0;
}