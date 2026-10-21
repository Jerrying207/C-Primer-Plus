#include<stdio.h>
#include<stdlib.h>je
int main(void)
{
    char name[1000];
    char wsurname[1000];
    printf("请输入你的名：");
    scanf("%s",&name);
    printf("请输入你的姓：");
    scanf("%s",&wsurname);
    printf("%s %s",name,wsurname);
    printf("\n%*d %*d",strlen(name),strlen(name),strlen(wsurname),strlen(wsurname));
    return 0;
}