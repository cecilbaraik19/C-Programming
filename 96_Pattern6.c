#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < i * 2; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/*
Output
1
23
345
4567
56789
*/