#include<stdio.h>
void input(double arr[3][5])
{
    printf("请输入3组数，每组数包含5个double类型的数：\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%lf",&arr[i][j]);
        }
    }
}
void averages(double arr[3][5],double ave[3])
{
    for(int i=0;i<3;i++)
    {
        double sum=0;
        for(int j=0;j<5;j++)
        {
            sum+=arr[i][j];
        }
        ave[i]=sum/5.0;
    }
}
double total_ave(double arr[3][5])
{
    double sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum/15.0;
}
double Big(double arr[3][5])
{
    double max=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    double arr[3][5];
    double ave[3];
    input(arr);
    averages(arr,ave);
    double total_avg=total_ave(arr);
    double max=Big(arr);
    printf("%lf &lf",total_avg,&max);
    return 0;
}