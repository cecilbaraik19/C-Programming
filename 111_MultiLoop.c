#include <stdio.h>
int main()
{
    int i, j, k,n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        for(n=i-1;n>=1;n--)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}
/*
Output
     1
    121
   12321
  1234321
 123454321
*/