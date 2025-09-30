// Function: No Parameter & Return Value
// Program for Sum of Even No. from 100 to 70
#include <stdio.h>
int Sum_Of_Even_No();
int main()
{
    int sum;
    sum = Sum_Of_Even_No();
    printf("Sum of EVEN No. from 100 to 70 :%d\n", sum);
    return 0;
}
int Sum_Of_Even_No()
{
    int i, s = 0;
    for (i = 100; i >= 70; i--)
    {
        printf("%d\n", i);
        s = s + i;
    }
    return s;
}