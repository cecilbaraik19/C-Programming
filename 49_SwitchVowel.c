// Switch program for Vowel
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Lower Case Vowel");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Upper Case Vowel");
        break;
    default:
        printf("Invalid Vowel");
    }
}