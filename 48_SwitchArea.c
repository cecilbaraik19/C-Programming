// Switch program for finding the total area of Circle, Triangle and Rectangle
#include <stdio.h>
int main()
{
    int a, b, ch;
    float area;
    printf("1 for Area of Circle\n");
    printf("2 for Area of Rectangle\n");
    printf("3 for Area of Triangle\n");
    printf("Enter your Choice........");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter the Radius of Circle\n");
        scanf("%d", &a);
        area = 3.14 * a * a;
        printf("Area of Circle     :%2f\n", area);
        break;
    case 2:
        printf("Enter the Length and Breadth of Rectangle\n");
        scanf("%d%d", &a, &b);
        area = a * b;
        printf("Area of Rectangle :%2f\n", area);
        break;
    case 3:
        printf("Enter the Base and Height of Triangle\n");
        scanf("%d%d", &a, &b);
        area = .50 * a * b;
        printf("Area of Triangle :%2f\n", area);
        break;
    default:
        printf("Invalid Choice");
    }
    return 0;
}