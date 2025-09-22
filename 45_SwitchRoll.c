// Switch program for roll and name
#include <stdio.h>
int main()
{
    int roll;
    printf("Enter the Roll No.\n");
    scanf("%d", &roll);
    switch (roll)
    {
    case 1:
        printf("Cecil");
        break;
    case 2:
        printf("Yashi");
        break;
    case 3:
        printf("Annurag");
        break;
    case 4:
        printf("Aakansha");
        break;
    default:
        printf("Invalid Roll No.");
        return 0;
    }
}