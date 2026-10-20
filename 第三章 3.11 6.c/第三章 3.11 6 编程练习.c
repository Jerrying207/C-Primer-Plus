#include<stdio.h>
int main()
{
    double a;
    printf("请输入水的夸脱数：");
    scanf("%lf",&a);
    double b=950.0*a;
    double c=b/3.0e-23;
    printf("%e\n",c);
    return 0;                                                 
}