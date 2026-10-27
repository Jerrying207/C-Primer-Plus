#include<stdio.h>
#include<ctype.h>
int read(char *word,int len)
{
    int ch;
    int i=0;
    while((ch=getchar())!=EOF&&isspace(ch)&&ch!='\n')//跳过第一个非空字符前的空白
    {
        continue;
    }
    if(ch==EOF)//如果读到结尾了就直接给我get out！（白色兔子指人.jpg）
    {
        return 0;
    }
    while(ch!=EOF&&!isspace(ch)&&i<len-1&&ch!='q')//在单词中遇到鬼了就跳出
    {
        word[i]=ch;//不是鬼的就给我存进数组
        i++;
        ch=getchar();//继续读下一个
    }
    word[i]='\0';//手动加上字符串结束标志
    while(ch!='\n'&&ch!=EOF&&ch!='q');//丢弃输入行中的其余字符
    {
        ch=getchar();
    }
    return i;//返回长度
}
int main()
{
    char word[50];
    printf("请输入一行文本：\n");
    int len=read(word,50);
    if(len>0)
    {
        printf("%s\n",word);
        printf("%d\n",len);
    }
    else
    {
        printf("你输入的根本不是人类的语言！\n");
    }
    return 0;
}