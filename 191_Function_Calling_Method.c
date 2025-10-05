// Function Calling Method : Call By Value Method
#include <stdio.h>

void disp(int, int);

int main()
{
    int a, b;
    printf("Enter the Value of a & b\n");
    scanf("%d%d", &a, &b);

    printf("Value of a before function   : %d\n", a);
    printf("Value of b before function   : %d\n", b);

    disp(a, b);

    printf("Value of a after function    : %d\n", a);
    printf("Value of b after function    : %d\n", b);

    return 0;
}

void disp(int x, int y)
{
    x = x + 10;
    y = y + 20;
    printf("\nValue of a inside function   : %d\n", x);
    printf("Value of b inside function   : %d\n", y);
}
