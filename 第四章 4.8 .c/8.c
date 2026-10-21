#include <stdio.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_KM 1.609

int main(void)
{
    double mile, gallon;
    double mpg;        // 美制：英里/加仑
    double euro;       // 欧制：升/100公里

    printf("请输入行驶英里数和消耗加仑数：");
    scanf("%lf %lf", &mile, &gallon);

    mpg = mile / gallon;
    euro = GALLON_TO_LITER * 100 / (MILE_TO_KM * mpg);

    printf("美式油耗（英里/加仑）：%.1f\n", mpg);
    printf("欧式油耗（升/100公里）：%.1f\n", euro);

    return 0;
}