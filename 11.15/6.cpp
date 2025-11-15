#include <stdio.h>
#include <stdlib.h>


int pow(int a, int n)
{

    if (n == 0)
    {
        return 1;
    }

    return a * pow(a, n - 1);
}

int main(int argc, char** argv)
{
    int s;
    int r;

    scanf_s("%d", &s);
    scanf_s("%d", &r);

    printf("%d", pow(s, r));

    return 0;
}
