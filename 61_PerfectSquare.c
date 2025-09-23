// Program for finding out Perfect Square No.
#include <stdio.h>
int main()
{
    int i, n, s = 0;
    printf("Enter any No.\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (i * i == n)
        {
            s = 1;
            break;
        }
    }
    if (s == 1)
    {
        printf("Given no. is a Perfect Square No.");
    }
    else
    {
        printf("Given No. is NOT a Perfect Square No.");
    }
    return 0;
}