#include<cstdio>



int main(int argc, char** argv)
{
    int n = 0;
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

    k = 0;

    int f = 0;
    int s = 0;


    while (k != n)
    {


        if (arr[k + 1] > f)
        {
            f = arr[k + 1];
            s = k + 1;
        }

        k++;

    }

    
 
    k = 0;

    int i = 0;
    int t = s;

    while (k != n)
    {


        if (arr[k + 1] < arr[t])
        {
            i = arr[k + 1];
            t = k + 1;
        }

        k++;

    }
   

    k = 0;

    while (k != n)
    {


        if (arr[k + 1] == f)
        {
            arr[k + 1] = i;
        }

        printf("%d", arr[k + 1]);

        k++;

    }
    



    return 0;
}
