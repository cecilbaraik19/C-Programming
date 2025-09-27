// Program for Counting Odd and Even No.
#include <stdio.h>
int main()
{
    int i, arr[100],on=0,en=0;
    printf("Enter 10 Array Elements\n");
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Array Element\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
        if(arr[i]%2==0)
        {
            en++;
        }
        else{
            on++;
        }
    }
    printf("Total Odd No. :%d\n",on);
    printf("Total Even No. :%d\n",en);
    return 0;
}