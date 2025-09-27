// Program for finding the maximum no. and minimum no.
#include <stdio.h>
int main()
{
    int i, arr[100], max, min;
    printf("Enter 10 Array Elements\n");
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    printf("Array Element\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum No. :%d\n", max);
    printf("Minimum No. :%d\n", min);
    return 0;
}