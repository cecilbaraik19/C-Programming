#include <stdio.h>
int main()
{
    float pa, da;
    printf("Enter Purchase Amount\n");
    scanf("%f", &pa);
    if (pa <= 5000)
    {
        da = pa * .10;
    }
    else if (pa <= 10000)
    {
        da = pa * .15;
    }
    else if (pa <= 15000)
    {
        da = pa * .20;
    }
    else if (pa <= 20000)
    {
        da = pa * .25;
    }
    else if (pa > 20000)
    {
        da = pa * .30;
    }
    printf("Purchase Amount         :%2f\n", pa);
    printf("Discount Amount         :%2f\n", da);
    printf("Payment Amount          :%2f\n", (pa - da));
    return 0;
}