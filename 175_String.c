#include <stdio.h>
int main()
{
    char st[35];
    int i;

    printf("Enter any String:\n");
    fgets(st, sizeof(st), stdin);   

    printf("String is : %s\n", st);

    // Count length manually
    for (i = 0; st[i] != '\0'; i++)
    {
        printf("%c ", st[i]);   // prints each character
    }

    printf("\nLength of String : %d\n", i - 1); 
    // -1 to ignore newline '\n' added by fgets
    return 0;
}
