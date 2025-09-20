// Goto program for Sum of First Ten No.
#include <stdio.h>
int main()
{
    int i = 1, s = 0;
start:
    printf("%d\n", i);
    s = s + i;
    i++;
    if (i <= 10)
    {
        goto start;
    }
    printf("Sum of 1st ten No.   :%d\n", s);
    return 0;
}