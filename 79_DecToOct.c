// Program to convert Decimal number into Octal number
#include <stdio.h>
int main()
{
    int n, num, d, on = 0, a = 1;
    printf("Enter any Binary No.\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        d = n % 8;
        on = on + d * a;
        a = a * 10;
        n = n / 8;
    }
    printf("Octal no. of %d is %d\n", num, on);
    return 0;
}