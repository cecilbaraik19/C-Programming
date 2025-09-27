// Sum of Array given by the User
#include <stdio.h>
int main()
{
    int i, arr[10], s = 0;
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
        s = s + arr[i];
    }
    printf("Sum of 10 Array Element :%d\n", s);
    return 0;
}