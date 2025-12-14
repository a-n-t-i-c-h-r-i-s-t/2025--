#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    int i = 0;

    while (i != n)
    {
        scanf_s("%d", &arr[i]);

        i++;
    }

    i = 0;
    int s = 0;

    while (i != n)
    {

        if (arr[i] > 0)
        {
            s++;
        }

        i++;
    }

    printf("%d", s);

    free(arr);
    return 0;
}
