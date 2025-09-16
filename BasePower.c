#include <stdio.h>
#include <math.h>
int main()
{
    int b, p, r;
    printf("Enter Base Value\n");
    scanf("%d", &b);
    printf("Enter Power Value\n");
    scanf("%d", &p);
    r = pow(b, p);
    printf("Base Value = %d, Power Value = %d & Result = %d\n", b, p, r);
    return 0;
}