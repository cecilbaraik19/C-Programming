// Pointer Function Example
#include <stdio.h>

void Max(int *, int *); // Function Declaration

int main()
{
    int a, b;
    printf("Enter two different numbers:\n");
    scanf("%d%d", &a, &b);

    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);

    Max(&a, &b);
    return 0;
}

void Max(int *a, int *b) // Function Definition
{
    if (*a > *b)
    {
        printf("Max No. : %d\n", *a);
    }
    else
    {
        printf("Max No. : %d\n", *b);
    }
}
