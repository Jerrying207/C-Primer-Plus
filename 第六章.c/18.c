#include<stdio.h>
int main()
{
    int week=1;
    int friend=5;
    while(1)
    {
        int t=friend;
        t-=week;
        friend=t*2;
        week++;
        if(friend>150)
        {
            break;
        }
        printf("%d\n",friend);
    }
    return 0;
}