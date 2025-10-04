#include <stdio.h>
int main()
{
    int a, b, c, *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;
    printf("Enter the value of a & b\n");
    scanf("%d%d", pa, pb);
    printf("Value of a      :%d\n", a);
    printf("Value of b      :%d\n", b);
    c = *pa * *pb;
    printf("Product of two no. :%d\n", *pc);
    return 0;
}