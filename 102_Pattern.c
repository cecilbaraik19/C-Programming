#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j * 2 - 1);
        }
        printf("\n");
    }
    return 0;
}

/*
Output
97531
7531
531
31
1
*/