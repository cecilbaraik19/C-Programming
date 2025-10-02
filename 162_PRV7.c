// Function: Parameter & Return Value
// Program for Prime Number

#include <stdio.h>

int Prime(int n);  // function prototype

int main()
{
    int n, result;
    printf("Enter any Number: ");
    scanf("%d", &n);

    result = Prime(n);  // call function

    if (result == 1)
    {
        printf("This is a Prime Number\n");
    }
    else
    {
        printf("This is NOT a Prime Number\n");
    }
    return 0;
}

// Function definition
int Prime(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)   // prime numbers have exactly 2 divisors
        return 1; // true → prime
    else
        return 0; // false → not prime
}
