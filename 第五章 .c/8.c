#include <stdio.h>
int main(void)
{
    int mod;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &mod);
    int num;
    printf("Now enter the first operand: ");
    while (scanf("%d", &num) == 1 && num > 0)
    {
        printf("%d %% %d is %d\n", num, mod, num % mod);
        printf("Enter next number for first operand (<= 0 to quit): ");
    }
    printf("Done\n");
    return 0;
}
