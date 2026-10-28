#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cnt[11];
    int seed;
    for(seed=1;seed<=10;seed++)
    {
     srand(seed);//弄十个不同的种子值
     for(int i=1;i<=10;i++)
      {
        cnt[i]=0;//每次运行前先清空上次的值
      }  
      for(int i=0;i<1000;i++)
      {
        int num=rand()%10+1;
        cnt[num]++;
      }
      for(int i=1;i<=10;i++)
      {
        printf("%d %d\n",i,cnt[i]);//打印数和它出现了几次
      }
    }
    return 0;
}