// WAP accept month No. from user and display season name
#include<stdio.h>
int main()
{
    int month;
    printf("Enter Month No.\n");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("January\n");
        printf("Winter Season");
        break;

        case 2:
        printf("February\n");
        printf("Winter Season");
        break;

        case 3:
        printf("March\n");
        printf("Spring Season");
        break;

        case 4:
        printf("April\n");
        printf("Summer Season");
        break;

        case 5:
        printf("May\n");
        printf("Summer Season");
        break;

        case 6:
        printf("June\n");
        printf("Monsoon Season");
        break;

        case 7:
        printf("July\n");
        printf("Monsoon Season");
        break;

        case 8:
        printf("August\n");
        printf("Monsoon Season");
        break;

        case 9:
        printf("September\n");
        printf("Monsoon Season");
        break;

        case 10:
        printf("October\n");
        printf("Winter Season");
        break;

        case 11:
        printf("November\n");
        printf("Winter Season");
        break;

        case 12:
        printf("December\n");
        printf("Winter Season");
        break;

        default:
        printf("Invalid Month Selection");
    
    }
    return 0;
}