#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= 1; j--)
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
77777
55555
33333
11111
*/