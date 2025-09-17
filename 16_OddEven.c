#include <stdio.h>
int main()
{
    int n;
    printf("Enter any No.\n");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Given No. is Even No.") : printf("Given No. is Odd No.");
    return 0;
}