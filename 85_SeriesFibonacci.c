// Fibonacci Series
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, n = 3;
    printf("%d ", a);
    printf("%d ", b);
    do
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        n++;
    } while (n <= 10);
    return 0;
}