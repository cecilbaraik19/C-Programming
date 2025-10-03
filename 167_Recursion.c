// Recursion : Program for table of two
#include <stdio.h>
void table(int);
int main()
{
    table(2);
}
void table(int i)
{
    if (i <= 20)
    {
        printf("%d\n", i);
        table(i + 2);
    }
}