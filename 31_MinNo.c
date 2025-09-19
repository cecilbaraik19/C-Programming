// WAP accept three different no. from user and display min no.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three different No.\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("Minimum No. is :%d\n", a);
    }
    else if (b < a && b < c)
    {
        printf("Minimum No. is :%d\n", b);
    }
    else
    {
        printf("Minimum No. is :%d\n", c);
    }
    return 0;
}