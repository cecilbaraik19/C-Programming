// Goto program for Factorial for any No. given by the user
#include <stdio.h>
int main()
{
    int n, f = 1;
    printf("Enter any No.\n");
    scanf("%d", &n);
start:
    f = f * n;
    n--;
    if (n >= 1)
    {
        goto start;
    }
    printf("Factorial of %d is %d", n, f);
    return 0;
}