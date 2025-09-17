#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter Three differnt No.\n");
    scanf("%d%d%d", &a, &b, &c);
    max = a > b ? a > c ? a : c : b > c ? b : c;
    printf("Max No. is           :%d\n", max);
    return 0;
}