/*
 * @Author: 王教鼎
 * @Date: 2021/5/22 9:06 下午
 * @Description: 程序清单3.3
 */
#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}
