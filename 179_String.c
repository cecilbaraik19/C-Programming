// String Program for comparing between two strings

#include <stdio.h>
#include <string.h>

// Function to remove newline from fgets input
void remove_newline(char *str)
{
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

// Function to reverse a string manually
void reverse(char *str, char *rev)
{
    int i, j, len = strlen(str);
    for (i = 0, j = len - 1; j >= 0; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[i] = '\0'; // null terminate
}

int main()
{
    char st1[25], st2[25];
    int y;

    printf("Enter any String: ");
    fgets(st1, sizeof(st1), stdin);
    remove_newline(st1);

    printf("String is : %s\n", st1);

    reverse(st1, st2); // manually reverse into st2
    printf("Reverse String is : %s\n", st2);

    y = strcmp(st1, st2); // Compare original and reverse

    if (y == 0)
        printf("String is Palindrome\n");
    else
        printf("String is NOT Palindrome\n");

    return 0;
}
