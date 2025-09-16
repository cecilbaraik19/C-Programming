#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    float r;
    printf("Enter the value of a & b\n");
    scanf("%d%d", &a, &b);
    r = sqrt(pow(a + b, 3));
    printf("Result          :%.3f\n", r);
    return 0;
}