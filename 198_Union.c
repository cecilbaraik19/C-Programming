
// Program: Demonstration of Union in C
// Aim: To show how union shares memory among all its members
#include <stdio.h>

union date
{
    int dd;
    int mm;
    int yy;
};

int main()
{
    union date dob;

    printf("Enter Date: ");
    scanf("%d", &dob.dd);
    printf("You entered Date (dd): %d\n", dob.dd);

    printf("Enter Month: ");
    scanf("%d", &dob.mm);
    printf("Now union stores Month (mm): %d\n", dob.mm);
    printf("But Date (dd) is overwritten! dd = %d\n", dob.dd);

    printf("Enter Year: ");
    scanf("%d", &dob.yy);
    printf("Now union stores Year (yy): %d\n", dob.yy);
    printf("Date (dd) and Month (mm) are lost!\n");

    printf("----------------------------------\n");
    printf("Size of dob : %lu bytes\n", sizeof(dob));

    return 0;
}
