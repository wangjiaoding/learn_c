/*
 * @Author: 王教鼎
 * @Date: 2021/6/14 5:46 下午
 * @Description: 第5题
 */
#include <stdio.h>

void larger_of(double * x, double * y);

int main()
{
    double a = 10.1;
    double b = 5.2;
    larger_of(&a, &b);
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    return 0;
}

void larger_of(double * x, double * y)
{
    *y = *x = *x - *y > 0 ? *x : *y;
}
