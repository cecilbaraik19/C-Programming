//Program for finding Spy Number
#include<stdio.h>
int main()
{
    int n,s=0,p=1,d;
    printf("Enter any No.\n");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(s==p)
    {
        printf("Given No. is SPY No.");
    }
    else{
        printf("Given No. is NOT a SPY No.");
    }
    return 0;
}