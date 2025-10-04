#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *st;
    int i, j, l;

    st = (char *)malloc(100 * sizeof(char)); // allocate memory

    printf("Enter any String\n");
    fgets(st, 100, stdin);
    st[strcspn(st, "\n")] = '\0'; // remove newline

    printf("String is : %s\n", st);

    l = strlen(st);
    printf("Length of String : %d\n", l);

    for (i = 0; i < l; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", st[j]);
        }
        printf("\n");
    }

    free(st); // free allocated memory
    return 0;
}
