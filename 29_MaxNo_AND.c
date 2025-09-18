#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three different no.\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("Max No. is   :%d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("Max No. is   :%d\n", b);
    }
    else
    {
        printf("Max No. is   :%d\n", c);
    }
    return 0;
}