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

   
    
    while (k != 0)
    {
        
        printf("%d", arr[k]);

        k--;

    }


    return 0;
}
