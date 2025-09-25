// Square + 1
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter Term\n");
    scanf("%d", &n);
    do
    {
        printf("%d  ", i * i + 1);
        i++;
    } while (i <= n);
    return 0;
}