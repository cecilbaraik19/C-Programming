// While Loop Program for Sum of First Ten No.
#include <stdio.h>
int main()
{
    int i = 1, s = 0;
    while (i <= 10)
    {
        printf("%d\n", i);
        s = s + i;
        i++;
    }
    printf("Sum of first 10 No. :%d", s);
    return 0;
}