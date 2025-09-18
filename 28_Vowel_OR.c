#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Lower Vowel");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Upper Vowel");
    }
    else
    {
        printf("Invalid Vowel");
    }
    return 0;
}