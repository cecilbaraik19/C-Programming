// Program of Transpose of Matrix
#include <stdio.h>
int main()
{
    int i, j, arr1[3][3], arr2[3][3];
    printf("Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
            arr2[i][j] = arr1[j][i];
        }
        printf("\n");
    }
    printf("Transpose of Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}