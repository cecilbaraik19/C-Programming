// String Program: Finding out the Vowel from the string given by the user
#include <stdio.h>
#include <string.h>

int main()
{
    char st1[25], ch;
    int i, v = 0, l;

    printf("Enter any String:\n");
    fgets(st1, sizeof(st1), stdin);

    // Remove newline character if present
    l = strlen(st1);
    if (l > 0 && st1[l - 1] == '\n')
        st1[l - 1] = '\0';

    printf("String is  : %s\n", st1);

    l = strlen(st1);
    for (i = 0; i < l; i++)
    {
        ch = st1[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            v++;
        }
    }

    printf("Total Number of Vowels : %d\n", v);
    return 0;
}
