//Switch program for remarks/grade
#include<stdio.h>
int main()
{
    char grade;
    printf("Enter the Grade\n");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'a':
        case 'A':
        printf("Excellent");
        break;
        case 'b':
        case 'B':
        printf("Very Good");
        break;
        case 'c':
        case 'C':
        printf("Good");
        break;
        default:
        printf("Invalid Grade");
        return 0;
    }
}