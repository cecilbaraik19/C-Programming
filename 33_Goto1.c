#include <stdio.h>
int main()
{
    int i = 1;
start:
    printf("Value of i = %d\n", i);
    i++;
    if (i <= 10)
    {
        goto start;
    }
    return 0;
}