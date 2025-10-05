// Structure Inside Array
#include <stdio.h>

struct student
{
    int roll;
    char name[35];
    int marks[3];
};

int main()
{
    struct student st;
    int i, total = 0;

    printf("Enter Roll No.: ");
    scanf("%d", &st.roll);

    printf("Enter Name: ");
    scanf("%s", st.name); 

    printf("Enter the Marks in 3 subjects:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Subject %d Marks: ", i + 1);
        scanf("%d", &st.marks[i]);
    }

    printf("----------------------------------------\n");
    printf("\tStudent Details\n");
    printf("----------------------------------------\n");
    printf("Roll No. : %d\n", st.roll);
    printf("Name     : %s\n", st.name);

    for (i = 0; i < 3; i++)
    {
        printf("Subject %d Marks : %d\n", i + 1, st.marks[i]);
        total += st.marks[i];
    }

    printf("----------------------------------------\n");
    printf("Total Marks : %d\n", total);
    printf("Average     : %.2f\n", total / 3.0);

    return 0;
}
