// Series : 1+2+3+,,,,,,= ?
#include <stdio.h>
int main()
{
    int i = 1, s = 0, n;
    printf("Enter Term\n");
    scanf("%d", &n);
    do
    {
        printf("%d+", i);
        s = s + i;
        i++;
    } while (i <= n);
    printf("\b=%d\n", s);
    return 0;
}