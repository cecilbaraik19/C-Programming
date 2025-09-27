// Insertion Sort Program
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
    for (i = 1; i < s; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("Data after Sorting\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}