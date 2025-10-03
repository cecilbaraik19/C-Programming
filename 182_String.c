// String Program for arranging the string according to the alphabet
#include <stdio.h>
#include <string.h>
int main()
{
    char st1[25], temp;
    int i, j, l;

    printf("Enter any String:\n");
    fgets(st1, sizeof(st1), stdin);

    l = strlen(st1);
    if (l > 0 && st1[l - 1] == '\n')
        st1[l - 1] = '\0';

    printf("String is : %s\n", st1);

    l = strlen(st1);
    for (i = 0; i < l - 1; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (st1[i] > st1[j])
            {
                temp = st1[i];
                st1[i] = st1[j];
                st1[j] = temp;
            }
        }
    }
    printf("String after arrange :%s\n", st1);
    return 0;
}