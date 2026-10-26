#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        char a='A';
        for(int m=0;m<n-i;m++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("%c",a);
            a++;
        }
        a--;
        for(int x=1;x<i;x++)
        {
            printf("%c",--a);
        }
        printf("\n");
    }
    return 0;
}