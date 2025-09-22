// Switch program for Calculator
#include <stdio.h>
int main()
{
    int a, b, c;
    char op;
    printf("Enter the value of a & b\n");
    scanf("%d%d", &a, &b);
    printf("Enter Operator......");
    scanf("\n%c", &op);
    switch (op)
    {
    case '+':
        c = a + b;
        printf("Sum of two no. :%d\n", c);
        break;

    case '-':
        c = a - b;
        printf("Sub of two no. :%d\n", c);
        break;

    case '*':
        c = a * b;
        printf("Mul of two no. :%d\n", c);
        break;

    case '/':
        printf("Div of two no. :%2f\n", (float)a / b);
        break;

    case '%':
        c = a % b;
        printf("Mod of two no. :%d\n", c);
        break;

    default:
        printf("Invalid Operator");
        return 0;
    }
}