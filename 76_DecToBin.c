// Program for converting Decimal to Binary
#include <stdio.h>
int main()
{
    int n, num, d, bn = 0, a = 1;
    printf("Enter any Decimal No.\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        d = n % 2;
        bn = bn + d * a;
        a = a * 10;
        n = n / 2;
    }
    printf("Binary of %d is %d\n", num, bn);
    return 0;
}