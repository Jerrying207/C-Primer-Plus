 #include <stdio.h>
 #include <math.h> 
double triple(double x) //自定义1
{
    return 3.0 * x;
}
double square(double x) //自定义2
{
    return x * x;
}
void transform(const double source[], double target[], int n, double (*func)(double)) 
{
    for (int i = 0; i < n; i++) 
    {
        target[i] = func(source[i]); //把变完的数存到target里去
    }
}
void show_array(const double arr[], int n) //展示数组
{
    for (int i = 0; i < n; i++) 
    {
        printf("%10.4f ", arr[i]);
    }
    printf("\n");
}
int main(void) {
    const int SIZE = 10; 
    double source[10] = {0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0};
    double target[10];

    printf("原始数组:\n");
    show_array(source, SIZE);//调用展示数组
    
    transform(source, target, SIZE, sin);
    printf("调用 transform(..., sin) 结果:\n");
    show_array(target, SIZE);//调用展示数组（此时展示target）

    transform(source, target, SIZE, cos);
    printf("调用 transform(..., cos) 结果:\n");
    show_array(target, SIZE);

    transform(source, target, SIZE, triple);
    printf("调用 transform(..., triple) 结果 (乘以3):\n");
    show_array(target, SIZE);

    transform(source, target, SIZE, square);
    printf("调用 transform(..., square) 结果 (求平方):\n");
    show_array(target, SIZE);

    return 0;
}                                                    