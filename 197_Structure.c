// Structure within Structure
#include <stdio.h>

struct address
{
    char city[15];
    char state[15];
};

struct student
{
    int roll;
    char sname[25];
    struct address sa; // student address
};

struct employee
{
    int eno;
    char ename[25];
    struct address ea; // employee address
};

int main()
{
    struct student stu;
    struct employee emp;

    printf("Student Details\n");
    printf("Enter Roll No.: ");
    scanf("%d", &stu.roll);

    printf("Enter Name: ");
    scanf("%s", stu.sname);

    printf("Enter City: ");
    scanf("%s", stu.sa.city);

    printf("Enter State: ");
    scanf("%s", stu.sa.state);

    printf("---------------------------------\n");

    printf("Employee Details\n");
    printf("Enter Employee No.: ");
    scanf("%d", &emp.eno);

    printf("Enter Name: ");
    scanf("%s", emp.ename);

    printf("Enter City: ");
    scanf("%s", emp.ea.city);

    printf("Enter State: ");
    scanf("%s", emp.ea.state);

    printf("---------------------------------\n");

    printf("Student Name : %s\n", stu.sname);
    printf("Roll No.     : %d\n", stu.roll);
    printf("City         : %s\n", stu.sa.city);
    printf("State        : %s\n", stu.sa.state);

    printf("---------------------------------\n");

    printf("Employee Name: %s\n", emp.ename);
    printf("Employee No. : %d\n", emp.eno);
    printf("City         : %s\n", emp.ea.city);
    printf("State        : %s\n", emp.ea.state);

    return 0;
}
