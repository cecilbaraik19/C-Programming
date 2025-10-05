// Structure Array Type
#include <stdio.h>

struct student
{
    int roll;
    char name[35];
    int marks;
};

int main()
{
    struct student st[100];
    int i, s;

    printf("Enter how many records: ");
    scanf("%d", &s);

    for (i = 0; i < s; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Enter Roll No.: ");
        scanf("%d", &st[i].roll);

        printf("Enter Name: ");
        scanf("%s", st[i].name); 

        printf("Enter Marks: ");
        scanf("%d", &st[i].marks);

        printf("----------------------------------\n");
    }

    printf("\n\tStudent Details\n");
    printf("-----------------------------------\n");

    for (i = 0; i < s; i++)
    {
        printf("Roll No. : %d\n", st[i].roll);
        printf("Name     : %s\n", st[i].name);
        printf("Marks    : %d\n", st[i].marks);
        printf("-----------------------------------\n");
    }

    return 0;
}
