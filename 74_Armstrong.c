// Program for Finding out Armstrong Number
#include <stdio.h>
int main()
{
    int n, num, sum = 0, d;
    printf("Enter any No.\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        d = n % 10;
        sum = sum + d * d * d;
        n = n / 10;
    }
    if (sum == num)
    {
        printf("Given No. is Armstrong No.");
    }
    else
    {
        printf("Given No. is NOT a Armstrong No.");
    }
    return 0;
}