// Program for finding out Palindrome Number
#include <stdio.h>
int main()
{
    int n, num, rev = 0, d;
    printf("Enter any No.\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    printf("Reverse No. :%d\n", rev);
    if (rev == num)
    {
        printf("Given No. is a Palidrome No.");
    }
    else
    {
        printf("Given no. is NOT a Palindrome No.");
    }
    return 0;
}