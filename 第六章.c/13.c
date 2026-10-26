#include<stdio.h>
int main()
{
    int arr[8];
    arr[0]=1;
    int i=0;
    for(i=1;i<8;i++)
    {
        arr[i]=arr[i-1]*2;
    }
    i=0;//重置
    do{
        printf("%d ",arr[i]);
        i++;
    }while(i<8);


    return 0;
}