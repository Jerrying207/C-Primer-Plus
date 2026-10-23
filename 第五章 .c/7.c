#include <stdio.h>
double cube(double x)
{
    return x * x * x;
}
int main(void)
{
    double n;
    printf("Please enter a number: ");
    while (scanf("%lf", &n) == 1)
    {
        printf("The cube of %.2lf is %.2lf\n", n, cube(n));
        printf("Please enter a number: ");
    }
    return 0;
}
