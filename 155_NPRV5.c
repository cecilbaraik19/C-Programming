// Function: No Parameter & Return Value
// Program for display Palindrome number from 101 to 200
#include <stdio.h>
int CountPalindrome();
int main()
{
    int p;
    p = CountPalindrome();
    printf("\nPalindrome from b/w 101 and 200 :%d\n", p);
    return 0;
}
int CountPalindrome()
{
    int n, i, d = 0, r = 0, p = 0;
    for (i = 101; i <= 200; i++)
    {
        n = i;
        while (n > 0)
        {
            d = n % 10;
            r = r * 10 + d;
            n = n / 10;
        }
        if (r == i)
        {
            printf("%d ", i);
            p++;
        }
        r = 0;
    }
    return p;
}