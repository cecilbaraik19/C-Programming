#include <stdio.h>
int main()
{
    int a = 35, b = 45, c = 12, *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    printf("Value of arr[0]             :%x\n", arr[0]);
    printf("Value of *arr[0]            :%d\n", *arr[0]);
    printf("Value of arr[1]             :%x\n", arr[1]);
    printf("Value of *arr[1]            :%d\n", *arr[1]);
    printf("Value of arr[2]             :%x\n", arr[2]);
    printf("Value of *arr[2]            :%d\n", *arr[2]);
    return 0;
}