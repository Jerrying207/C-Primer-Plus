#include <stdio.h>
int bit(int value, int position) 
{
    if ((value & (1 << position)) != 0) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}
int main(void) 
{
    int value, position;
    printf("输入你要检查的整数: ");
    scanf("%d",&value);
    printf("输入你要检查第几位: ");
    scanf("%d", &position);
    int result=bit(value, position);
    if (result == 1) 
    {
        printf("%d位是[1]\n", position);
    } 
    else 
    {
        printf("%d位是[0]\n", position);
    }
    return 0;
}