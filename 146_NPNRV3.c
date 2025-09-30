// Function: No Parameter No Return Value
// Factorial No. program
#include <stdio.h>
void factorial();
int main()
{
    factorial();
    return 0;
}
void factorial()
{
    int i, n, f = 1;
    printf("Enter any no.\n");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        f = f * i;
        i--;
    }
    printf("Factorial no. of %d is :%d\n", n, f);
}