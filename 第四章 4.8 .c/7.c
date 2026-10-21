#include<stdio.h>
#include<float.h>
int main()
{
    float f=1.0/3.0;
    double d=1.0/3.0;

    printf("%.6f\n",f);
    printf("%.12f\n",f);
    printf("%.16f\n",f);

    printf("%.6lf\n",f);
    printf("%.12lf\n",f);
    printf("%.16lf\n",f);

    printf("FLT_DIG=%d ",FLT_DIG);
    printf("DBL_DIG=%d",DBL_DIG);
    return 0;

}