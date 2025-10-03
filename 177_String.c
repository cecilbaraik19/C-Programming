// String Program for Conversion from UpperCase to LowerCase and From LowerCase to UpperCase with library function.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char st[35], ch;
    int i, l;
    printf("Enter any String:\n");
    fgets(st, sizeof(st), stdin);
    printf("String is : %s", st);
    l = strlen(st);
    printf("Length of the String :%d\n", l);
    printf("String after Conversion: ");
    for (i = 0; i < l; i++)
    {
        ch = st[i];
        if (isupper(ch))
        {
            printf("%c", tolower(ch));
        }
        else if (islower(ch))
        {
            printf("%c", toupper(ch));
        }
        else
        {
            printf("%c", ch);
        }
    }
    return 0;
}