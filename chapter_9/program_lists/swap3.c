/*
 * @Author: 王教鼎
 * @Date: 2021/6/14 3:56 下午
 * @Description: 程序清单9.15
 */
#include <stdio.h>

void interchange(int * u, int * v);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}

void interchange(int * u, int * v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}
