// Goto program for Sum of first Ten Square No.
#include <stdio.h>
int main()
{
    int i = 1, s = 0;
start:
    printf("%d\n", i * i);
    s = s + i*i;
    i++;
    if (i <= 10)
    {
        goto start;
    }
    printf("Sum of 1st Ten Square No.   :%d\n", s);
    return 0;
}