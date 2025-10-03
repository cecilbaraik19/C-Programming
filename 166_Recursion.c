// Recursion : Print number from 1 to 10
#include<stdio.h>
void disp(int );
int main()
{
    disp(1);
}
void disp(int i)
{
    if(i<=10)
    {
        printf("%d\n",i);
        disp(i+1);
    }
}