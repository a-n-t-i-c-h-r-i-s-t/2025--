#include<cstdio>
#include<cmath>


int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    int a = 0;

    scanf_s("%d", &n);
   
    int arr[1000] = { 0 };

    while (k != n)
    {
        
        scanf_s("%d", &a);

        arr[k + 1] = a;
        k++;
    }
    
    k = 0;

    int r = 0;
    int c = 0;
    scanf_s("%d", &c);

    while (k != n)
    {
        if (arr[k + 1] == c)
        {
            r++;
        }

        k++;
    }

    printf("%d", r);


    return 0;
}