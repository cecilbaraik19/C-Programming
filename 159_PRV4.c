// Function: Parameter & Return Value
// Program for converting the Meter into Kilometer
#include <stdio.h>
float Dist(float);
int main()
{
    float m, km;
    printf("Enter the Distance in Meter\n");
    scanf("%f", &m);
    km = Dist(m);
    printf("Distance in Kilometer :%2f\n", km);
    return 0;
}
float Dist(float w)
{
    float yz;
    yz = w / 1000;
    return yz;
}