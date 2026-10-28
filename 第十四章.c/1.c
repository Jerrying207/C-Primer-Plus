#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 
int leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int days_in_month(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && leap_year(year)) {
        return 29;
    }
    return days[month - 1];
}
int day_of_year(int year, int month, int day) {
    int total_days = 0;
    for (int i = 1; i < month; i++) {
        total_days += days_in_month(i, year);
    }
    return total_days + day;
}
int main() {
    char month_input[20];
    int day, year;
    int month = 0;
    char *month_abbr[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    printf("请输入日期: ");
    scanf("%s %d %d", month_input, &day, &year);
    // 判断输入的是数字还是字母
    if (isdigit(month_input[0])) {
        month = atoi(month_input);
    } else {
        // 将输入转换为首字母大写，方便匹配
        month_input[0] = toupper(month_input[0]);
        month_input[1] = tolower(month_input[1]);
        month_input[2] = tolower(month_input[2]);
        month_input[3] = '\0';
        for (int i = 0; i < 12; i++) {
            if (strcmp(month_input, month_abbr[i]) == 0) {
                month = i + 1;
                break;
            }
        }
    }
    if (month < 1 || month > 12 || day < 1 || day > days_in_month(month, year)) {
        printf("输入的日期无效。\n");
        return 1;
    }
    int result = day_of_year(year, month, day);
    printf("该日期是这一年的第 %d 天。\n", result);
    return 0;
}