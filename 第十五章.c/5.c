#include <stdio.h>
unsigned int rotate_l(unsigned int x, int n)
{
    return (x << n) | (x >> (8 - n));
}
int main(void) 
{
    unsigned int x;
    int n;
    printf("请输入初始数字 (0-255): ");
    scanf("%u", &x);
    printf("请输入左移位数 (1-7): ");
    scanf("%d", &n);
    unsigned int result = rotate_l(x, n);
    printf("移动之后: ");
    for (int i = 7; i >= 0; i--) 
    {
        printf("%d", (result >> i) & 1);//把结果一位一位打印出来。
    }
    return 0;
}