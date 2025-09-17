#include<stdio.h>
int main()
{
    int n;
    printf("Enter any No.\n");
    scanf("%d",&n);
    (n%5==0 && n%7==0)?printf("No. is divisible 5 and 7"):
    (n%5==0)?printf("No. is divisible only by 5 NOT 7"):
    (n%7==0)?printf("No. is divisible by 7 NOT 5"):
    printf("No. is NOT divisible by 5 and 7 ");
    return 0;
}