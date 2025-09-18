#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks\n");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Eligible for Admission");
    }
    return 0;
}