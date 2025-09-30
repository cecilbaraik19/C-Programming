// Function: Parameter & Return Value
// Program for Sum of Three Digit Number
#include<stdio.h>

// Function prototype
int Sum_Of_Three_Digit_No(int, int, int);

int main()
{
    int a,b,c,d,n;
    printf("Enter any Three Digit No.\n");
    scanf("%d",&n);

    // Extract digits
    a = n % 10;   // last digit
    n = n / 10;
    b = n % 10;   // middle digit
    n = n / 10;
    c = n % 10;   // first digit

    // Call function to calculate sum
    d = Sum_Of_Three_Digit_No(c, b, a);

    printf("Sum of Three Digit No. : %d + %d + %d = %d\n", c, b, a, d);

    return 0;
}

// Function definition
int Sum_Of_Three_Digit_No(int w, int x, int y)
{
    int z;
    z = w + x + y;
    return z;
}
