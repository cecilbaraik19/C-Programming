// Goto program for printing multiple of 2 from 2 to 20
#include<stdio.h>
int main()
{
    int i = 2;
    table:
    printf("%d\n",i);
    i+=2;
    if(i<=20)
    {
        goto table;
    }
    return 0;
}