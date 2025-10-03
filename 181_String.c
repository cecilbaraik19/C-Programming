//String Program for Replacing the string
#include <stdio.h>
#include <string.h>

int main()
{
    char st1[25], ch;
    int i, l;

    printf("Enter any String:\n");
    fgets(st1, sizeof(st1), stdin);

    // Remove newline character if present
    l = strlen(st1);
    if (l > 0 && st1[l-1] == '\n')
        st1[l-1] = '\0';

    printf("String is : %s\n", st1);

    l = strlen(st1);
    for (i = 0; i < l; i++)
    {
        if (st1[i] == ' ')
        {
            st1[i] = '$';
        }
    }

    printf("String after replace : %s\n", st1);
    return 0;
}
