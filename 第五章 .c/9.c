#include <stdio.h>

// 自定义函数：接收华氏温度，计算并打印三种温度，内部用const常量
void Temperatures(double fahr)
{
    const double F_OFFSET = 32.0;
    const double FACTOR = 5.0 / 9.0;
    const double K_OFFSET = 273.16;

    double celsius = FACTOR * (fahr - F_OFFSET);
    double kelvin = celsius + K_OFFSET;

    printf("华氏温度：%.2f ℉\n", fahr);
    printf("摄氏温度：%.2f ℃\n", celsius);
    printf("开氏温度：%.2f K\n\n", kelvin);
}

int main(void)
{
    double f;
    printf("请输入华氏温度（输入q退出）：");
    while (scanf("%lf", &f) == 1)
    {
        Temperatures(f);
        printf("请输入华氏温度（输入q退出）：");
    }
    printf("程序结束。\n");
    return 0;
}
