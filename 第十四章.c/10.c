#include <stdio.h>
#include <ctype.h>
void func_a(void) 
{
    printf("A\n");
}
void func_b(void)
{
    printf("B\n");
}
void func_c(void) 
{
    printf("C\n");
}
int main(void) 
{
    char choice;
    void (*func_array[])(void) = {func_a, func_b, func_c};//函数指针数组
    printf("请选择一个选项:\n");
    printf("（a) 执行A        （b) 执行B\n");
    printf("（c) 执行C        （q) 退出\n");
    while ((choice = getchar()) != 'q')//不为q时 
    {
        while (getchar() != '\n') 
        {
            continue; 
        }
        choice = tolower(choice);
        if (choice >= 'a' && choice <= 'c') 
        {
            func_array[choice - 'a'](); // 'a' - 'a' = 0, 'b' - 'a' = 1, 'c' - 'a' = 2
        } else if (choice != 'q') 
        {
            printf("无效的输入，请重新选择。\n");
        }
        printf("\n请选择一个选项:\n");// 再次显示菜单提示
        printf("(a) 执行功能 A        (b) 执行功能 B\n");
        printf("(c) 执行功能 C        (q) 退出\n");
    }
    printf("程序退出。\n");
    return 0;
}