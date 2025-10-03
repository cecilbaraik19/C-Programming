// String Program for Conversion from UpperCase to LowerCase and From LowerCase to UpperCase without library function.
#include <stdio.h>
int main()
{
    char st[35];
    int i, ac;

    printf("Enter any String:\n");
    fgets(st, sizeof(st), stdin);

    printf("String is : %s", st);
    printf("String after Conversion: ");

    for (i = 0; st[i] != '\0'; i++)
    {
        ac = st[i];
        if (ac >= 65 && ac <= 90) // Uppercase A-Z
        {
            printf("%c", ac + 32); // Convert to lowercase
        }
        else if (ac >= 97 && ac <= 122) // Lowercase a-z
        {
            printf("%c", ac - 32); // Convert to uppercase
        }
        else
        {
            printf("%c", ac); // Non-alphabet stays same
        }
    }

    return 0;
}
