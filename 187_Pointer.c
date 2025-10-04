#include <stdio.h>
int main()
{
    int i = 1, *pi;
    pi = &i;
    while (*pi <= 10)
    {
        printf("%d\n", i);
        (*pi)++;
    }
    return 0;
}
