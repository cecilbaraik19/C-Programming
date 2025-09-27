//  Linear Search Program to find the No. and its Position and How many Times
#include <stdio.h>
int main()
{
    int i, arr[100], s, num, c = 0;
    printf("Enter the Array Size<100\n");
    scanf("%d", &s);
    printf("Enter Array Elements\n");
    for (i = 0; i < s; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Array Element\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Enter the no. want to be search.....");
    scanf("%d", &num);
    for (i = 0; i < s; i++)
    {
        if (arr[i] == num)
        {
            printf("Position :%d\n", i + 1);
            c++;
        }
    }
    if (c > 0)
    {
        printf("Given No. is Found %d time", c);
    }
    else
    {
        printf("Given no. is NOT found");
    }
    return 0;
}