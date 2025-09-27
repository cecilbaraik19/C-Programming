// Selection Sort Program
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
    for (i = 0; i < s - 1; i++)
    {
        for (j = i + 1; j < s; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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