#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    double di;
    int zhi;
    double res=1.0;
    if(argc!=3)
    {
        printf("参数不对哈哈！awa。\n");
        return 1;
    }
    di=atof(argv[1]);
    zhi=atoi(argv[2]);
    int abs_zhi=zhi<0?-zhi:zhi;
    for(int i=0;i<abs_zhi;i++)
    {
        res*=di;
    }
    if(zhi<0)
    {
        res=1.0/res;
    }
    printf("%f",res);
    return 0;
}
//这道题要在终端打开，不能直接运行。
//在终端输入gcc 14.c -o 14
//qwq