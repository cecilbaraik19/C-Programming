// Series : 1,4,9,25,36,49.........n
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter any Term\n");
    scanf("%d",&n);
    do
    {
        printf(" %d ",i*i);
        i++;
    } while (i<=n);
    
}