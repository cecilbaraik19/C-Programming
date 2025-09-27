// Display Even No.
#include <stdio.h>
int main()
{
    int i, arr[10];
    printf("Enter 10 Array Elements\n");
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Array Element\n");
    for (i = 1; i < 10; i += 2)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}