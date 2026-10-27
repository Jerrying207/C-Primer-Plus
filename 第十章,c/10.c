#include<stdio.h>
void Sum(int arr1[],int arr2[],int arrsize,int newarr[])
{
    for(int i=0;i<arrsize;i++)
    {
        newarr[i]=arr1[i]+arr2[i];
    }
}
int main()
{
    int arr1[4]={2,4,5,8};
    int arr2[4]={1,0,4,6};
    int arrsize=4;
    int newarr[4];
    Sum(arr1,arr2,arrsize,newarr);
    for(int k=0;k<arrsize;k++)
    {
        printf("%d ",newarr[k]);
    }
    return 0;
}