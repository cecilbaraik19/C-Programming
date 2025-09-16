#include<stdio.h>
int main()
{
    char grade;
    int roll;
    float per;
    double fee;
    grade ='A';
    roll = 006;
    per = 89.98;
    fee = 87880.89;
    printf("Grade           :%c\n",grade);
    printf("Roll            :%d\n",roll);
    printf("Percentage      :%f\n",per);
    printf("Fee             :%lf\n",fee);
    printf("Size of char    :%d byte\n",sizeof(grade));
    printf("Size of int     :%d byte\n",sizeof(roll));
    printf("Size of float   :%d byte\n",sizeof(per));
    printf("Size of double  :%d byte\n",sizeof(fee));
    return 0;
}