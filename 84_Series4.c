// Series: 1-4+9-16+25-...... = ?
#include <stdio.h>
int main()
{
    int i = 1, n, s = 0;
    printf("Enter the Term\n");
    scanf("%d", &n);
    do
    {
        if (i % 2 == 0)
        {
            printf("%d-", i * i);
            s = s + i * i;
        }
        else
        {
            printf("%d+", i * i);
            s = s - i * i;
        }
        i++;
    } while (i <= n);
    printf("\b=%d\n", s);
    return 0;
}