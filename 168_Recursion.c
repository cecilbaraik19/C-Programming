// Recursion : Table of any number
#include <stdio.h>
void table(int, int);
int main()
{
    int n, i = 1;
    printf("Enter any No.\n");
    scanf("%d", &n);
    table(i, n);
}
void table(int i, int n)
{
    if (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        table(i + 1, n);
    }
}