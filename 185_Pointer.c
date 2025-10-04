#include <stdio.h>
int main()
{
    int a = 5, b, *p;
    p = &a;
    printf("Value of a                  :%d\n", a);
    printf("Address of a or Value of p  :%x\n", p);
    printf("Value of *p                 :%d\n", *p);
    printf("Address of p                :%x\n", &p);
    b = *p;
    printf("Value of b                  :%d\n", b);
    printf("Address of b                :%x\n", &b);
    *p = *p + 10;
    printf("Value of a                  :%d\n", a);
    return 0;
}