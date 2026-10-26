#include <stdio.h>

int main() {
    char type;
    double weight;
    double total_weight = 0.0; 
    double total_veggiecost = 0.0;
    double total_sweetcost = 0.0;
    double total_price = 0.0; 
    double discount = 0.0;    
    double shipping = 0.0;    
    double final_total = 0.0; 
    printf("请输入订单：\n");
    while (1) {
        scanf(" %c", &type); 
        if (type == 'q') {
            break; 
        }
        switch (type) {
            case 'a':
                scanf("%f", &weight);
                total_weight += weight;
                total_veggiecost += weight * 2.05;
                break;
            case 'b':
                scanf("%f", &weight);
                total_weight += weight;
                total_sweetcost += weight * 1.15;
                break;
            case 'c':
                scanf("%f", &weight);
                total_weight += weight;
                total_sweetcost += weight * 1.00;
                break;
            default:
                printf("不对，请重新输入");
                while(getchar() != '\n'); 
                break;
        }
    }
    if (total_weight == 0) {
        printf("您没有订购任何商品。\n");
        return 0;
    }
    total_price = total_veggiecost + total_sweetcost;

    if (total_price >= 100.0) {
        discount = total_price * 0.05;
    }
    if (total_weight <= 5.0) {
        shipping = 6.5;
    } 
    else if (total_weight <= 20.0) {
        shipping = 14.0;
    } 
    else {
        shipping = 14.0 + (total_weight - 20.0) * 0.5;
    }
    final_total = total_price - discount + shipping;
    printf("订购的蔬菜费用: $%.2lf\n", total_veggiecost);
    printf("订购的甜菜费用: $%.2lf\n", total_sweetcost);
    printf("货物总价 (不含运费): $%.2lf\n", total_price);
    printf("折扣 (5%%): $%.2lf\n", discount);
    printf("总重量: %.2lf 磅\n", total_weight);
    printf("运费和包装费: $%.2lf\n", shipping);
    printf("所有的费用总额: $%.2la
        f\n", final_total);
    return 0;
}