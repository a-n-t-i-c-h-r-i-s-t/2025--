#include <stdio.h>
#include <stdlib.h>


int min(int a, int b, int c, int d)
{
    int x = 0;

    if ((a < b)&& (a < c)&& (a < d))
    {
        x = a;
    }
    else if ((b < a) && (b < c) && (b < d))
    {
        x = b;
    }
    else if ((c < b) && (c < a) && (c < d))
    {
        x = c;
    }
    else if ((d < b) && (d < c) && (d < a))
    {
        x = d;
    }
    else
    {
        x = a;
    }
    
    return x;
}

int main(int argc, char** argv)
{
    int w = 0;
    int q = 0;
    int y = 0;
    int z = 0;

    scanf_s("%d", &w);
    scanf_s("%d", &q);
    scanf_s("%d", &y);
    scanf_s("%d", &z);

    int e = min(w, q, y, z);

    printf("%d", e);
 
    return 0;
}
