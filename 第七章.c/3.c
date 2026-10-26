#include <stdio.h>
int main()
{
    int arr[10005];
    int i = 0;
    int num;
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        arr[i] = num;
        i++;
    }
    int ou = 0;
    int ans_ou = 0; 
    int ji = 0;
    int ans_ji = 0;
    for (int m = 0; m < i; m++)
    {
        if (arr[m] % 2 == 0)
        {
            ou++;
            ans_ou += arr[m];
        }
        else
        {
            ji++;
            ans_ji += arr[m];
        }
    }
    if (ou > 0)
    {
        double ave_ou = (double)ans_ou / ou; 
        printf("偶数个数: %d, 平均值: %lf\n", ou, ave_ou);
    }
    else
    {
        printf("没有输入偶数\n");
    }

    if (ji > 0)
    {
        double ave_ji = (double)ans_ji / ji;
        printf("奇数个数: %d, 平均值: %lf\n", ji, ave_ji);
    }
    else
    {
        printf("没有输入奇数\n");
    }
    return 0;
}