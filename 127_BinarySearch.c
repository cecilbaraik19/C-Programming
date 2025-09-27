// Binary Search Program
#include <stdio.h>
int main()
{
    int arr[100], s, i, num, count = 0, first = 0, mid = 0, last = 0;
    printf("Enter Array Size<100\n");
    scanf("%d", &s);
    printf("Enter Array Element in Order\n");
    for (i = 0; i < s; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Array Element\n");
    printf("-----------------------------\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Enter the No. want to be Search........");
    scanf("%d", &num);
    last = s - 1;
    while ((first <= last) && (count == 0))
    {
        mid = (first + last) / 2;
        if (arr[mid] == num)
        {
            count = mid + 1;
        }
        else if (arr[mid] < num)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    if (count > 0)
    {
        printf("Given No. is Found %d position\n", count);
    }
    else
    {
        printf("Given no. is NOT found");
    }
    return 0;
}