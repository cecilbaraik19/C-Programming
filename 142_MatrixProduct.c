// Program of Product of Two Matrix
#include <stdio.h>
int main()
{
    int i, j, k, p = 0, arr1[3][3], arr2[3][3], arr3[3][3];
    printf("Enter 1st Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter 2nd Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("1st Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("2nd Matrix Element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                p = p + arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = p;
            p = 0;
        }
    }
    printf("Product of two Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}