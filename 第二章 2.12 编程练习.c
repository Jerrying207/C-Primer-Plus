#include<stdio.h>
int two()
{
    printf("two\n");
}
int one_three()
{
    printf("one\n");
    two();
    printf("three\n");

}
int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
    return 0;
}