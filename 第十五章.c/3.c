#include <stdio.h>
int count_ones(unsigned int n) {
    int count = 0;
    while (n != 0) {
        n = n & (n - 1); //消掉最右边的1,执行几次消掉几个。
        count++;        
    }
    return count;
}
int main(void) {
    unsigned int n;
    printf("请输入一个整数:");
    scanf("%d",&n);
    int res_cnt=count_ones(n);
    printf(" 该数字中打开的位（1）共有 %d 个。\n",res_cnt);
    return 0;
}