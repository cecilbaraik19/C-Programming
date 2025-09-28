// Matrix: Array Program for Sum of Left Diagonal
#include <stdio.h>
int main()
{
    int i, j, arr[3][3], ld = 0;
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
            if (i == j)
            {
                ld = ld + arr[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of Left Diagonal :%d\n", ld);
    return 0;
}