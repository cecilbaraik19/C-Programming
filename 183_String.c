// String Program for Sorting the Ten Strings according to the Alphabet
#include <stdio.h>
#include <string.h>

int main()
{
    char st1[10][25], temp[25];
    int i, j;

    printf("Enter 10 Names:\n");
    for (i = 0; i < 10; i++)
    {
        fgets(st1[i], sizeof(st1[i]), stdin);
        // Remove newline if present
        int len = strlen(st1[i]);
        if (len > 0 && st1[i][len - 1] == '\n')
            st1[i][len - 1] = '\0';
    }

    printf("\nNames Entered:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", st1[i]);
    }

    // Sorting names alphabetically
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(st1[i], st1[j]) > 0)
            {
                strcpy(temp, st1[i]);
                strcpy(st1[i], st1[j]);
                strcpy(st1[j], temp);
            }
        }
    }

    printf("\nNames after Sorting:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", st1[i]);
    }

    return 0;
}
