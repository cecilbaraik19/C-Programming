#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float r;
    printf("Enter any no.\n");
    scanf("%d", &n);
    r = sqrt(n);
    printf("Square root of %d is %f\n", n, r);
    return 0;
}