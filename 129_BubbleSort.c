// Bubble Sort Program
#include <stdio.h>
int main()
{
    int i, j, s, arr[100], temp;
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
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Data after Sorting\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}