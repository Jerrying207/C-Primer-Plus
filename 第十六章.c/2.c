#include<stdio.h>
#define DAOSHU(a,b) (2.0/(1.0/(a)+1.0/(b)))
int main()
{
    double a,b;
    if(scanf("%lf %lf",&a,&b)==2)
    {
        if(a==0||b==0)
        {
            printf("0没有倒数\n");
        }
        else
        {
            double res=DAOSHU(a,b);
            printf("%lf\n",res);
        }
    }
    return 0;
}