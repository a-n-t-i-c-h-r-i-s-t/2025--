#include <stdio.h>
#include <stdlib.h>

bool Election(bool x, bool y, bool z)
{

    if (((x == 0)&&(y == 0))|| ((z== 0) && (y == 0))|| ((x == 0) && (z == 0)))
    {
        printf("false"); 
    }
    else if (((x == 1) && (y == 1)) || ((z == 1) && (y == 1)) || ((x == 1) && (z == 1)))
    {
        printf("true");
    }
    return 0;
}


int main(int argc, char** argv)
{
    int r;
    int o;
    int w;
    scanf_s("%d", &r);
    scanf_s("%d", &o);
    scanf_s("%d", &w);

    Election(r, o, w);

    return 0;
}
