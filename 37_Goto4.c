// WAP - display the no. b/w 10 to 1
#include <stdio.h>
int main()
{
    int i = 10;
start:
    printf("%d\n", i);
    i--;
    if (i >= 1)
    {
        goto start;
    }
    return 0;
}