// Function: No Parameter No Return Value
// Program for doing Reverse of the given No.
#include <stdio.h>
void Reverse();
int main()
{
    Reverse();
    Reverse();
    return 0;
}
void Reverse()
{
    int n, num, rev = 0, d;
    printf("Enter any No.\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    printf("Reverse no. :%d\n", rev);
}