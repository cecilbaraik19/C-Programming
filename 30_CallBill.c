#include <stdio.h>
int main()
{
    int nc, mr = 100;
    float bill;
    printf("Enter No. of Calls\n");
    scanf("%d", &nc);
    if (nc >= 1 && nc <= 200)
    {
        bill = mr;
    }
    else if (nc >= 201 && nc <= 300)
    {
        bill = (nc - 200) * .50 + mr;
    }
    else if (nc >= 301 && nc <= 400)
    {
        bill = (nc - 200 - 100) * .75 + 50 + mr;
    }
    else if (nc >= 401 && nc <= 500)
    {
        bill = (nc - 200 - 100 - 100) * 1 + 75 + 50 + mr;
    }
    else if (nc >= 501)
    {
        bill = (nc - 200 - 100 - 100 - 100) * 1.50 + 100 + 75 + 50;
    }
    printf("Bill Amount          :%2f\n", bill);
    return 0;
}