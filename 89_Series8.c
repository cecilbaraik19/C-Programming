// Series : 1+4+3+16+5+........n = ?
#include <stdio.h>
int main()
{
    int i = 1, n, s = 0;
    printf("Enter any Term\n");
    scanf("%d", &n);
    do
    {
        if (i % 2 == 0)
        {
            printf("%d+", i * i);
            s = s + i * i;
        }
        else
        {
            printf("%d+", i);
            s = s + i;
        }
        i++;
    } while (i <= n);
    printf("\b=%d\n", s);
    return 0;
}