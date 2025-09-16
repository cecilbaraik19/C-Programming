#include <stdio.h>
int main()
{
    int a, b, c, d, n;
    printf("Enter a three digit no.\n");
    scanf("%d", &n);
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    d = a + b + c;
    printf("Sum of three digit no. is :%d+%d+%d = %d\n", c, b, a, d);
    return 0;
}