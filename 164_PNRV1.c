// Function: Parameter & No Return Value
// Program for Finding out the HCF and LCM of input given by the user

#include <stdio.h>

void hcf_lcm(int, int);  // function prototype

int main()
{
    int a, b;
    printf("Enter the value of a & b\n");
    scanf("%d%d", &a, &b);

    printf("Value of a      : %d\n", a);
    printf("Value of b      : %d\n", b);

    hcf_lcm(a, b);   // call function
    return 0;
}

// Function definition
void hcf_lcm(int a, int b)
{
    int hcf, lcm, i, m;

    m = (a < b) ? a : b;   // smaller number
    for (i = 1; i <= m; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    lcm = (a * b) / hcf;

    printf("HCF : %d\n", hcf);
    printf("LCM : %d\n", lcm);
}
