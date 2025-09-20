// WAP - display EVEN no. b/w 100 to 70
#include <stdio.h>
int main()
{
    int i = 100;
start:
    printf("%d\n", i);
    i -= 2;
    if (i >= 70)
    {
        goto start;
    }
    return 0;
}