#include<cstdio>



int main(int argc, char** argv)
{
    int  n = 0;
    int k = 0;
    int a = 0;

    scanf_s("%d", &n);

    int arr[1000] = {};

    while (k != n)
    {
        scanf_s("%d", &a);

        arr[k + 1] = a;
        k++;
    }

    int g = 0;
    scanf_s("%d", &g);

    k = 0;
    

    while (arr[k + 1] != g)
    {
        if (arr[k + 1] != g)
        {
            k++;
        }
      

        if (k == n)
        {
            k = 0;
            g = g - 1;
        }


    }

    printf("%d", arr[k+1]);

    return 0;
}
