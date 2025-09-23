// While Loop Program for Finding the Perfect Number
#include <stdio.h>
int main()
{
    int i = 1, n, s = 0;
    printf("Enter any No.\n");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
        i++;
    }
    if (s == n)
    {
        printf("Given no. is a Perfect No.");
    }
    else
    {
        printf("Given no. is NOT a Perfect No.");
    }
    return 0;
}