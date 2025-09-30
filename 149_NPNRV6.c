// Function: No Parameter No Return Value
// Find out the Perfect Square Number
#include <stdio.h>
void PerfectSquare();
int main()
{
    PerfectSquare();
    PerfectSquare();
    return 0;
}
void PerfectSquare()
{
    int i = 1, n, s = 0;
    printf("Enter any No.\n");
    scanf("%d", &n);
    while (i < n)
    {
        if (i * i == n)
        {
            s = 1;
            break;
        }
        i++;
    }
    if (s == 1)
    {
        printf("This is a Perfect Square No.\n");
    }
    else
    {
        printf("This is NOT a Perfect Square No.\n");
    }
}