// Recursion: Program to print Square of first 10 number
#include <stdio.h>
void disp(int);
int main()
{
    disp(1);
}
void disp(int i)
{
    if (i <= 10)
    {
        printf("%d\n", i * i);
        disp(i + 1);
    }
}