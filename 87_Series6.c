#include <stdio.h>
#include <Math.h>
int main()
{
    int i = 1, s = 0, n;
    printf("Enter Term\n");
    scanf("%d", &n);
    do
    {
        printf("%d+", (int)pow(i, i));
        s = s + (int)pow(i, i);
        i++;
    } while (i <= n);
    printf("\b=%d\n", s);
    return 0;
}