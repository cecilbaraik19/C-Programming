//While Loop program for to find Prime No.
#include<stdio.h>
int main()
{
    int i=1,n,c=0;
    printf("Enter any No.\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==2)
    {
        printf("Given no. is a Prime No.");
    }
    else{
        printf("Given no. is NOT Prime No.");
    }
    return 0;
}