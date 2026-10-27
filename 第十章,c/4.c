#include<stdio.h>
int Big(double arr[],int arrsize)
{
    double max=arr[0];
    int num=0;
    for(int i=0;i<arrsize;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            num=i;
        }
    }
    return num;
}
int main()
{
    double arr[1005];
    int i=0;
    while(scanf("%lf",&arr[i])==1)
    {
        i++;
    }
    int arrsize=i;
    int res=Big(arr,arrsize);
    printf("%d",res);
    return 0;
}