// Function: Parameter & Return Value
// Program for Product of Two No.
#include <stdio.h>
int Product(int, int);
int main()
{
    int a, b, r;
    printf("Enter the value of a & b\n");
    scanf("%d%d", &a, &b);
    printf("Value of a :%d\n", a);
    printf("Value of b :%d\n", b);
    r = Product(a, b);
    printf("Product of two no. :%d\n", r);
}
int Product(int x, int y)
{
    int z;
    z = x * y;
    return z;
}