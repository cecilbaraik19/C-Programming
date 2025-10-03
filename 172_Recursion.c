// Recursion:Program to Print ODD no. from 1 to 30
#include <stdio.h>
void disp(int);
int main()
{
    disp(1);
}
void disp(int i)
{
    if (i <= 30)
    {
        printf("%d\n", i);
        disp(i + 2);
    }
}