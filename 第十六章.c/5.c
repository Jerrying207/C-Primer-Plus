#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Pick(int arr[],int size,int picks)
{
    if(picks<=0)
    {
        return;
    }
    if(picks>size)
    {
        return;
    }
    for(int i=0;i<picks;i++)
    {
        int j=i+rand()%(size-i);
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        printf("%d\n",arr[i]);
    }
}
int main()
{
    srand((int)time(NULL));
    int arr[]={1,2,3,4,5,6,7,8,9};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    int pick=5;
    Pick(arr,arrsize,pick);
    return 0;
}