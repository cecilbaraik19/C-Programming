// Goto Program for Table of any No.
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter any No.\n");
    scanf("%d", &n);
table:
    printf("%d x %d = %d\n", n, i, n * i);
    i++;
    if (i <= 10)
    {
        goto table;
    }
    return 0;
}