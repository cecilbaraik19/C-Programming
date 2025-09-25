// Series: 1,2,9,4,25,.............
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the Term\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d,", i * i);
        }
        else
        {
            printf("%d,", i);
        }
    }
    return 0;
}