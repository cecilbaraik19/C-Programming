
// Goto Program for Table of 2.
#include <stdio.h>
int main()
{
    int i = 1;
    printf("Table of Two\n");
table:
    printf("%d x %d = %d\n", 2, i, 2 * i);
    i++;
    if (i <= 10)
    {
        goto table;
    }
    return 0;
}