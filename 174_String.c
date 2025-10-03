// String Program : Taking input from the user
#include <stdio.h>
int main()
{
    char st[35];
    printf("Enter any String\n");
    gets(st);
    printf("String is :%s\n", st);
    // or
    printf("String is :");
    puts(st);
    return 0;
}