#include <stdio.h>
int main()
{
    int ac;
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);
    ac = ch;
    printf("ASCII value of %c is %d\n", ch, ac);
    return 0;
}