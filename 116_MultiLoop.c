#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        for (k = 10; k > i * 2; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
Output

 *********
  *******
   *****
    ***
     *
*/