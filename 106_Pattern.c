#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*", i);
        }
        printf("\n");
    }
    return 0;
}

/*
Output
11111
22222
33333
44444
55555
*/