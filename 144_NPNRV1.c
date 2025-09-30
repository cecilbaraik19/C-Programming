/* Function: No Parameter No Return Value
   Sum of Two Values Program */
#include <stdio.h>

// Function Declaration
void disp();

// Main Function
int main()
{
    disp();   // call the function
    return 0; // main should return int
}

// Function Definition
void disp()
{
    int a, b, c;
    printf("Enter the Value of a & b\n");
    scanf("%d%d", &a, &b);

    printf("Value of a        : %d\n", a);
    printf("Value of b        : %d\n", b);

    c = a + b;
    printf("Sum of two no.    : %d\n", c);
}
