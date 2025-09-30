// Function: No Parameter & Return Value
// Program for Sum of ODD no. from 1 to 30
#include <stdio.h>
int Sum_Of_Odd_No();
int main()
{
    int sum;
    sum = Sum_Of_Odd_No();
    printf("Sum of ODD No. from 1 to 30 :%d\n", sum);
    return 0;
}
int Sum_Of_Odd_No()
{
    int i, s = 0;
    for (i = 1; i <= 30; i++)
    {
        printf("%d\n", i);
        s = s + i;
    }
    return s;
}