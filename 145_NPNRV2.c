// Another method for NPNRV
#include <stdio.h>
void disp()
{
    int a, b, c;
    printf("Enter the Value of a & b\n");
    scanf("%d%d", &a, &b);

    printf("Value of a        : %d\n", a);
    printf("Value of b        : %d\n", b);

    c = a + b;
    printf("Sum of two no.    : %d\n", c);
}
int main()
{
    disp();
    return 0;
}