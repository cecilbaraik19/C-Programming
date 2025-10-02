// Function: Parameter & No Return Value
// Program for Swap Two Numbers without 3rd Variable

#include <stdio.h>

void Swap(int, int);  // function prototype

int main()
{
    int a, b;
    printf("Enter the value of a & b\n");
    scanf("%d%d", &a, &b);

    printf("Value of a before swap : %d\n", a);
    printf("Value of b before swap : %d\n", b);

    Swap(a, b);   // function call

    return 0;
}

void Swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value of a after swap  : %d\n", a);
    printf("Value of b after swap  : %d\n", b);
}
