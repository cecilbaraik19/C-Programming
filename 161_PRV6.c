// Function: Parameter & Return Value
// Program for Palindrome Number

#include <stdio.h>

int Palindrome(int n);  // function prototype

int main()
{
    int num, rev;
    printf("Enter any Number: ");
    scanf("%d", &num);

    rev = Palindrome(num); // call function

    printf("Reverse Number: %d\n", rev);

    if (rev == num)
    {
        printf("This is a Palindrome Number\n");
    }
    else
    {
        printf("This is NOT a Palindrome Number\n");
    }
    return 0;
}

// Function definition
int Palindrome(int n)
{
    int r = 0, d;
    while (n > 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    return r;  // return reversed number
}
