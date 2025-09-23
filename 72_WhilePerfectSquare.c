//While Loop program for finding out Perfect Square No.
#include<stdio.h>
int main()
{
    int i=1,n,s=0;
    printf("Enter any No.\n");
    scanf("%d",&n);
    while(i<n)
    {
        if(i*i==n)
        {
            s=1;
            break;
        }
        i++;
    }
    if(s==1)
    {
        printf("Given no. is a Perfect Square No.");
    }
    else{
        printf("Given no. is NOT a Perfect Square No.");
    }
    return 0;
}