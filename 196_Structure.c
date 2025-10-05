// Structure Pointer
#include <stdio.h>

struct student
{
    int roll;
    char name[35];
    int marks;
};

int main()
{
    struct student s;     // actual structure variable
    struct student *st;   // pointer to structure
    st = &s;              // pointer points to structure variable

    printf("Enter Roll No.: ");
    scanf("%d", &st->roll);

    printf("Enter Name: ");
    scanf("%s", st->name);

    printf("Enter the Marks: ");
    scanf("%d", &st->marks);

    printf("----------------------------------------\n");
    printf("\tStudent Details\n");
    printf("----------------------------------------\n");
    printf("Roll No. : %d\n", st->roll);
    printf("Name     : %s\n", st->name);
    printf("Marks    : %d\n", st->marks);
    printf("----------------------------------------\n");
    printf("Size of st  : %lu bytes\n", sizeof(st));
    printf("Size of *st : %lu bytes\n", sizeof(*st));

    return 0;
}
