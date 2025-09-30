// Function: Parameter & Return Value
// Program for Converting the Fahrenheit into Celsius
#include<stdio.h>

float Temprature(float);

int main()
{
    float c,f;
    printf("Enter the temp. in Fahrenheit:\n");
    scanf("%f",&f);

    // Call function
    c = Temprature(f);

    printf("Temperature in Celsius : %.2f\n", c);
    return 0;
}


float Temprature(float w)
{
    float z;
    z = (w - 32) * 5 / 9;
    return z;
}
