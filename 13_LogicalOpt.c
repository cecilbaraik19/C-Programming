#include <stdio.h>
int main()
{
    int a = 1, b = 0;
    printf("Value of a               :%d\n", a);
    printf("Value of b               :%d\n", b);
    printf("Value of a&&a            :%d\n", (a && a));
    printf("Value of a&&b            :%d\n", (a && b));
    printf("Value of a||b            :%d\n", (a || b));
    printf("Value of b||b            :%d\n", (b || b));
    printf("Value of !a              :%d\n", (!a));
    printf("Value of !b              :%d\n", (!b));
    return 0;
}