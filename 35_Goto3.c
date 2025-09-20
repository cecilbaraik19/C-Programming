// Goto program for multiple of 2 from 1 to 20 in another method
#include <stdio.h>
int main()
{
    int i = 1;
table:
    printf("%d\n", i * 2);
    i++;
    if (i <= 10)
    {
        goto table;
    }
    return 0;
}