#include <stdio.h>
int main()
{
    int a = 5, *p;
    p = &a;
    printf("Value of a                  :%d\n", a);
    printf("Address of a or Value of p  :%x\n", p);
    printf("Value of *p                 :%d\n", *p);
    printf("Address of p                :%x\n", &p);
    return 0;
}