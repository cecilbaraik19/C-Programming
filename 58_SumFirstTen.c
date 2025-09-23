// For Loop program for displaying Sum of First Ten No.
#include <stdio.h>
int main()
{
    int i, s = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        s = s + i;
    }
    printf("Sum of First Ten No. is :%d", s);
    return 0;
}