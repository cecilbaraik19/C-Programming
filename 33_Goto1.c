// Goto program - printing the value of i from 1 to 10
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