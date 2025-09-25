//Series : Sum of Sqaure after the term given by the user
#include <stdio.h>
int main()
{
    int i = 1, s = 0, n;
    printf("Enter Term\n");
    scanf("%d", &n);
    do
    {
        printf("%d+", i*i);
        s = s + i*i;
        i++;
    } while (i <= n);
    printf("\b=%d\n", s);
    return 0;
}