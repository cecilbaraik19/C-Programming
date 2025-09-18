#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks\n");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Grade A");
    }
    else if (marks >= 80)
    {
        printf("Grade B");
    }
    else if (marks >= 70)
    {
        printf("Grade C");
    }
    else if (marks >= 60)
    {
        printf("Grade D");
    }
    else if (marks >= 45)
    {
        printf("Pass");
    }
    else
    {
        printf("Try Again");
    }
    return 0;
}