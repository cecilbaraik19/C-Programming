// WAP - display ODD no. b/w 1 to 30
#include <stdio.h>
int main()
{
    int i = 1;
start:
    printf("%d\n", i);
    i += 2;
    if (i <= 30)
    {
        goto start;
    }
    return 0;
}