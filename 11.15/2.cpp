#include <stdio.h>
#include <stdlib.h>


double power(double a, int n)
{
    int x = 1;
    double z = a;
    while (x != n)
    {
        z = z * a;
        x++;
    }
    return z;
}

int main(int argc, char** argv)
{
    double t = 0;
    int f = 0;
    scanf_s("%lf", &t);
    scanf_s("%d", &f);

    
  
    printf("%lf", power(t, f));

    return 0;
}
