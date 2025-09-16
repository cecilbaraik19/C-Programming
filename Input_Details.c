#include <stdio.h>
int main()
{
    char grade;
    int roll;
    float per;
    double fee;
    printf("Enter Grade\n");
    scanf("%c", &grade);
    printf("Enter Roll No.\n");
    scanf("%d", &roll);
    printf("Enter Percentage\n");
    scanf("%f", &per);
    printf("Enter Fee\n");
    scanf("%lf", &fee);
    printf("----------------------------------------\n");
    printf("Grade             :%c\n", grade);
    printf("Roll              :%d\n", roll);
    printf("Percentage        :%f\n", per);
    printf("Fee               :%lf\n", fee);
    return 0;
}