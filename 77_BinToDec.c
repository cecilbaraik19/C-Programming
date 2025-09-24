// Program to convert Binary number into Decimal number
#include<stdio.h>
int main()
{
    int n,num,d,dn=0,a=1;
    printf("Enter any Binary No.\n");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        d=n%10;
        dn=dn+d*a;
        a=a*2;
        n=n/10;
    }
    printf("Decimal no.of %d is %d\n",num ,dn);
    return 0;
}