// Function: No Parameter & Return Value
// Program for Counting the Prime No. from 1 to 100
#include <stdio.h>

int CountPrime();

int main()
{
    int r;
    r = CountPrime();
    printf("\nTotal Prime Numbers between 1 to 100: %d\n", r);
    return 0;
}

int CountPrime()
{
    int i, c = 0, n, p = 0;

    for (n = 1; n <= 100; n++)  
    {
        c = 0; // reset divisor count for each n

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }

        if (c == 2)   // prime has exactly 2 divisors
        {
            printf("%d ", n);
            p++;
        }
    }

    return p;
}
