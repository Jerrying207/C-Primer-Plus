#include <stdio.h>
void sort3(double *a, double *b, double *c) 
{
    double temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    };
}
int main() {
    double x, y, z;
    printf("请输入 3 个浮点数：\n");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("排序前：x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    sort3(&x, &y, &z);
    printf("排序后：x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    return 0;
}
