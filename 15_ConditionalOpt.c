#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks\n");
    scanf("%d", &marks);
    marks >= 50 ? printf("Pass") : printf("Fail");
    return 0;
}