#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("  ");
        }
        for (k = 1; k < i * 2; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
/*
Output

          1
        1 2 3
      1 2 3 4 5
*/