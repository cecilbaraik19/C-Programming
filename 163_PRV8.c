// Function: Parameter & Return Value
// Program for Armstrong Number

#include <stdio.h>

int Armstrong(int n);  
int main()
{
    int n, result;
    printf("Enter any Number: ");
    scanf("%d", &n);

    result = Armstrong(n);  // call function

    if (result == 1)
    {
        printf("This is an Armstrong Number\n");
    }
    else
    {
        printf("This is NOT an Armstrong Number\n");
    }
    return 0;
}

// Function definition
int Armstrong(int n)
{
    int original = n;   // store original number
    int sum = 0, d;

    while (n > 0)
    {
        d = n % 10;
        sum = sum + d * d * d;  
        n = n / 10;
    }

    if (sum == original)
        return 1;  
    else
        return 0;   
}
