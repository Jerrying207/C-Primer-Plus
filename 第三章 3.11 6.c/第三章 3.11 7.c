#include<stdio.h>
int main()
{
    double h;
    printf("请输入身高（英寸）：");
    scanf("%lf",&h);
    double H=2.54*h;
    printf("%.2lf",H);
    return 0;
}