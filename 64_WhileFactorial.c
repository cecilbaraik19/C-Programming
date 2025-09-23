// While Loop Program for Factorial of any no. given by the user
#include <stdio.h>
int main()
{
    int i, n, f = 1;
    printf("Enter any No.\n");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        printf("%d x ", i);
        f = f * i;
        i--;
    }
    printf("\b = %d\n", f);
    return 0;
}