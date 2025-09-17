#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age between 25 to 35\n");
    scanf("%d", &age);
    (age >= 25 && age <= 35) ? printf("In Range") : printf("Not in Range");
    return 0;
}