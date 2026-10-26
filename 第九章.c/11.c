#include<stdio.h>
int fibonacci(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }

        int a=1;
        int b=1;
        int next=0;
        for(int i=3;i<=n;i++)
        {
        next=a+b;
        a=b;
        b=next;
        }
        return next;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}