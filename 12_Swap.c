#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a & b\n");
    scanf("%d%d", &a, &b);
    printf("Value of a      :%d\n", a);
    printf("Value of b      :%d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a after swap   :%d\n", a);
    printf("Value of b after swap   :%d\n", b);
    return 0;
}