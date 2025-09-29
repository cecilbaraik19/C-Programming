// Function Program: Predefined Function Program
#include <stdio.h>
#include <math.h>
int main()
{
    float c, f, n;
    printf("Enter any floating point value\n");
    scanf("%f", &n);
    c = ceil(n);
    f = floor(n);
    printf("Ceil value of %2f is %2f\n", n, c);
    printf("Floor value of %2f is %2f\n", n, f);
    return 0;
}