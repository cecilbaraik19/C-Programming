// Function: No Parameter No Return Value
// Program for finding the Perfect Number
#include <stdio.h>
void PerfectNo();
int main()
{
    PerfectNo();
    PerfectNo();
    return 0;
}
void PerfectNo()
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
        printf("This no. is a Perfect No.\n");
    }
    else
    {
        printf("This no. is NOT a Perfect no.\n");
    }
}