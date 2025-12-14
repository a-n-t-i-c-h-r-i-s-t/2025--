#include <stdio.h>
#include <stdlib.h>



int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(int argc, char** argv)
{
    int f = 0;
    scanf_s("%d", &f);

    printf("%d", fibonacci(f+1));  
    return 0;
}


