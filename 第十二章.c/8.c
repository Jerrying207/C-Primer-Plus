#include<stdio.h>
#include<stdlib.h>
int *make_array(int elem,int val);
void show_array(const int ar[],int n);
int main(void)
{
    int *pa;
    int size;
    int value;
    printf("Enter the number of elements:");
    while(scanf("%d",&size)==1&&size>0)
    {
        printf("Enter the initialization values: ");
        scanf("%d",&value);
        pa=make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
            free(pa);
        }
        printf("Enter the number of elements(<1 to quit): ");
    }
    printf("Done!");
    return 0;
}
int *make_array(int elem,int val)//开辟内存，赋值
{
    int *arr=(int*)malloc(elem*sizeof(int));
    if(arr==NULL)
    {
        printf("内存分配错误\n");
        return NULL;
    }
    for(int i=0;i<elem;i++)
    {
        arr[i]=val;
    }
    return arr;
}
void show_array(const int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",ar[i]);
        if((i+1)%8==0)
        {
            printf("\n");
        }
    }
    if(n%8!=0)
    {
        printf("\n");
    }
}