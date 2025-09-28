// Matrix: Array Program for Sum of Row
#include <stdio.h>
int main()
{
    int i, j, arr[3][3], sr = 0;
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
            sr = sr + arr[i][j];
        }
        printf("%d\n", sr);
        sr = 0;
    }
    return 0;
}