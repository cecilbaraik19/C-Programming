// Recursion : Program for Factorial of any number.
#include <stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter any no.\n");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial of %d is %d\n", n, f);
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}