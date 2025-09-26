// Nested Loop Program
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = i; j <= 3; j++)
        {
            printf("Value of i=%d,Value of j=%d\n", i, j);
        }
    }
    return 0;
}