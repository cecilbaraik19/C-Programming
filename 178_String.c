// String Program for concatenate the two string
#include <stdio.h>
#include <string.h>

// Function to remove newline from fgets input
void remove_newline(char *str)
{
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n')
        str[len-1] = '\0';
}

int main()
{
    char fn[25], ln[25], name[51];

    printf("Enter the First Name: ");
    fgets(fn, sizeof(fn), stdin);
    remove_newline(fn);

    printf("Enter the Last Name: ");
    fgets(ln, sizeof(ln), stdin);
    remove_newline(ln);

    printf("First Name : %s\n", fn);
    printf("Last Name  : %s\n", ln);

    strcpy(name, fn);        // Copy first name
    strcat(name, " ");       // Add space
    strcat(name, ln);        // Add last name

    printf("Full Name  : %s\n", name);

    return 0;
}
