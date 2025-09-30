// Function: Parameter & Return Value
// Program for Converting the Celsius into Fahrenheit
#include <stdio.h>

float Temprature(float);

int main()
{
    float c, f;
    printf("Enter the temp. in Celsius:\n");
    scanf("%f", &c);

    // Call function
    f = Temprature(c);

    printf("Temperature in Fahrenheit : %.2f\n", f);
    return 0;
}

float Temprature(float w)
{
    float z;
    z = w * 9 / 5 + 32;
    return z;
}
