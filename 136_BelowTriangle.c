// Matrix Array Program for Sum of Below Triangle
#include <stdio.h>
int main()
{
    int i, j, arr[3][3], bt = 0;
    printf("Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            if (i > j)
            {
                bt = bt + arr[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of Below Triangle :%d\n", bt);
    return 0;
}