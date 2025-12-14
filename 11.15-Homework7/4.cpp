#include <stdio.h>
#include <stdlib.h>

int numb(int a)
{
    int x = 0;
    int r = 2;
    while (r != a)
    {
        

        if (a % r == 0)
        {
            x++;
        }

        r++;
    }
    if (x > 0)
    {
        printf("composite");
    }
    else
    {
        printf("prime");
    }
    return 0;
}


int main(int argc, char** argv)
{
    int r;

    scanf_s("%d", &r);
 
    numb(r);
 

    return 0;
}
