// Function: No Parameter No Return Value
// Program for Finding the Prime No.
#include <stdio.h>
void PrimeNo();
int main()
{
    PrimeNo();
    PrimeNo();
    return 0;
}
void PrimeNo()
{
    int i = 1, n, c = 0;
    printf("Enter any No.\n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            c++;
        }
        i++;
    }
    if (c == 2)
    {
        printf("This no. is Prime No.\n");
    }
    else
    {
        printf("This no. is NOT a Prime no.\n");
    }
}
