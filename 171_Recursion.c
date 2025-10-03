// Recursion: Program for Sum of First 10 number
#include <stdio.h>
void sum_of_ten_no(int, int);
int main()
{
    sum_of_ten_no(1, 0);
}
void sum_of_ten_no(int i, int s)
{
    if (i <= 10)
    {
        printf("%d\n", i);
        s = s + i;
        sum_of_ten_no(i + 1, s);
    }
    else
    {
        printf("Sum of First ten number :%d\n", s);
    }
}