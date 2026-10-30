#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp;
    char filename[100];
    char ch;
    printf("Enter the filename:");
    if(scanf("%99s",filename)!=1)
    {
        fprintf(stderr,"Can't read.\n");
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(filename,"r"))==NULL)
    {
        fprintf(stderr,"Can't open this.\n");
        exit(EXIT_FAILURE);
    }
    printf("文件内容如下：\n");
    while ((ch = getc(fp)) != EOF) 
    {
        putchar(ch);
    }
    if (fclose(fp) != 0) 
    {
        fprintf(stderr, "Can't close this.\n");
    }
    return 0;
}