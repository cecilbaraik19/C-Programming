//Program for Perfect No.
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter any No.\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        printf("Given No. is Perfect No.");
    }
    else{
        printf("Given No. is NOT Perfect No.");
    }
    return 0;
}