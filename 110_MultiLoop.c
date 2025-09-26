#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= i; j++)
        {
            printf("*");
        }
        for (k = 1; k < i; k++)
        {
            printf("_*");
        }
        printf("\n");
    }
    return 0;
}
/*
Output
*
*_*
*_*_*
*_*_*_*
*_*_*_*_*
*/