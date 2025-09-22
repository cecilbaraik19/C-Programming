//For Loop - Program for Finding the Prime No.
#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter any No.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("This no. is Prime No.");
    }
    else{
        printf("This is NOT Prime No.");
    }
    return 0;
}