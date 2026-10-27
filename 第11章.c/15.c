#include <stdio.h>
#include <string.h> 
#include <ctype.h>  
int main(int argc, char *argv[])
{
    int ch;
    int mode = 'p'; 
    if (argc > 1) 
    {
        if (strcmp(argv[1], "-u") == 0) 
        {
            mode = 'u';
        }
        else if (strcmp(argv[1], "-l") == 0) 
        {
            mode = 'l';
        }
        else 
        {
            mode = 'p';
        }
    }
    printf("程序当前模式: -%c\n", mode);
    printf("请输入文本（按 Ctrl+D 结束输入）：\n");
    while ((ch = getchar()) != EOF)//结束前
    {
        if (mode == 'u')
        {
            putchar(toupper(ch)); //大
        }
        else if (mode == 'l')
        {
            putchar(tolower(ch)); //小
        }
        else 
        {
            putchar(ch);   //原（神启动）
        }
    }
    printf("\n结束\n");
    return 0;
}
