#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", i * 2 - 1);
        }
        printf("\n");
    }
    return 0;
}

/*
Output
99999
7777
555
33
1
*/