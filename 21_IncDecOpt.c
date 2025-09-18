#include <stdio.h>
int main()
{
    int a = 5;
    printf("Value of a in first step           :%d\n", a);
    printf("Value of a in second step          :%d\n", ++a);
    printf("Value of a in third step           :%d\n", a);
    printf("Value of a in fourth step          :%d\n", a++);
    printf("Value of a in fifth step           :%d\n", a);

    return 0;
}