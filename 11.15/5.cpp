#include <stdio.h>
#include <stdlib.h>


double pow(double a, int n)
{

    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 1.0 / pow(a, -n);
    }

    return a * pow(a, n - 1);
}

int main(int argc, char** argv)
{
    double s;
    int r;

    scanf_s("%lf", &s);
    scanf_s("%d", &r);

    printf("%lf", pow(s, r));

    return 0;
}

