// Nested Condition
// Eligibility for stream on the basis of marks
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks\n");
    scanf("%d", &marks);
    if (marks >= 65 && marks <= 100)
    {
        if (marks >= 85)
        {
            printf("Eligible for Sci., Commerce & Arts ");
        }
        else if (marks >= 75)
        {
            printf("Eligible for Comm. and Arts");
        }
        else
        {
            printf("Eligible for Arts");
        }
    }
    else
    {
        if (marks >= 55 && marks < 65)
        {
            printf("Wait for 2nd Round");
        }
        else
        {
            printf("Not Eligible for Admission");
        }
    }
    return 0;
}