#include<stdio.h>
int isprime(int n)
{
    if(n<=1) return 0;
    for(int i=2;i<=n/i;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(isprime(i)==1)
        {9
            printf("%d ",i);
        }
    }
    return 0;
}