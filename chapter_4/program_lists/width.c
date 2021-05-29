/*
 * @Author: 王教鼎
 * @Date: 2021/5/27 10:01 下午
 * @Description: 程序清单4.7
 */
#include <stdio.h>

#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    return 0;
}
