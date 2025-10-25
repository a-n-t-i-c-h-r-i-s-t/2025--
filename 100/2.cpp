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

        arr[k+1] = a;
        k++;
    }


    int z = 0;
    int t = 0;
    scanf_s("%d", &z);
    scanf_s("%d", &t);
    
    int f = 0;
    int s = 0;
   

    while (z != t)
    {
        

        if (arr[z+1] > f)
        {
            f = arr[z+1];
            s = z+1;
        }

        z++;

    }

    printf("%d", f);
    printf("%d", s);



    return 0;
}