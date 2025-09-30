// Function: No Parameter & Return Value
//  Program for Sum of Ten Number
#include <stdio.h>
int Sum_Of_Ten_No();
int main()
{
    int r;
    r = Sum_Of_Ten_No();
    printf("Sum of First Ten No. :%d\n", r);
    return 0;
}
int Sum_Of_Ten_No()
{
    int i, s = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        s = s + i;
    }
    return s;
}