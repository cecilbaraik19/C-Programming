//  Linear Search Program to insert a records of the student and then find the Marks Records of Student according to the Roll no.
#include <stdio.h>
int main()
{
    int i, roll[100], marks[100], s, rn, c = 0;
    printf("Enter How many Records to insert<100\n");
    scanf("%d", &s);
    printf("Enter Array Elements\n");
    for (i = 0; i < s; i++)
    {
        printf("Enter Roll no.\n");
        scanf("%d", &roll[i]);
        printf("Enter Marks\n");
        scanf("%d", &marks[i]);
    }
    printf("................................\n");
    printf("\tStudent Details\n");
    printf("................................\n");
    printf("Roll No.        Marks\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t\t%d\n", roll[i], marks[i]);
    }
    printf("Enter the Roll no. want to be search.....");
    scanf("%d", &rn);
    for (i = 0; i < s; i++)
    {
        if (roll[i] == rn)
        {
            printf("Marks      :%d", marks[i]);
            c++;
        }
    }
    if (c == 0)
    {
        printf("Given Roll No. is NOT Found");
    }
    return 0;
}