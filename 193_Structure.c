#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yy;
};
int main()
{
    struct date dob, doe;
    printf("Enter Date of Birth\n");
    printf("Enter Date\n");
    scanf("%d", &dob.dd);
    printf("Enter Month\n");
    scanf("%d", &dob.mm);
    printf("Enter Year\n");
    scanf("%d", &dob.yy);
    printf("---------------------------------------\n");
    printf("Enter Date of Exam\n");
    printf("Enter Date\n");
    scanf("%d", &doe.dd);
    printf("Enter Month\n");
    scanf("%d", &doe.mm);
    printf("Enter Year\n");
    scanf("%d", &doe.yy);
    printf("---------------------------------------\n");
    printf("Date of Birth      :%d/%d/%d\n", dob.dd, dob.mm, dob.yy);
    printf("Date of Exam       :%d/%d/%d\n", doe.dd, doe.mm, doe.yy);
    return 0;
}