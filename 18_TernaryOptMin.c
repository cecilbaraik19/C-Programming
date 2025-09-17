#include <stdio.h>
int main()
{
    int a, b, min;
    printf("Enter two differnt No.\n");
    scanf("%d%d", &a, &b);
    min = a < b ? a : b;
    printf("Min No          :%d\n", min);
    return 0;
}