#include<stdio.h>
int main()
{
    printf("a代表加法，b代表减法，c代表乘法，d代表除法");
    char op;
    float a,b;
    float res;
   
do {
    scanf(" %c %f %f", &op, &a, &b); 
    if(op!='a'&&op!='b'&&op!='c'&&op!='d')
    {
        printf("请输入正确字符\n");
    }
    if (op == 'd' && b == 0) {
        printf("除数不能为0,a请重新输入。\n");
    }
    
} while ((op!='a'&&op!='b'&&op!='c'&&op!='d')||(op == 'd' && b == 0));
if (op == 'a') res = a + b;
if (op == 'b') res = a - b;
if (op == 'c') res = a * b;
if (op == 'd') res = a / b;
printf("结果是: %f\n", res);
return 0;
}