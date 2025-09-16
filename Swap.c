#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Value of a :%d\n", a);
    printf("Value of a b:%d\n", b);
    c = a;
    a = b;
    b = c;
    printf("Value of a after swap   :%d\n", a);
    printf("Value of b after swap   :%d\n", b);
    return 0;
}