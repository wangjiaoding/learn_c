/*
 * @Author: 王教鼎
 * @Date: 2021/6/5 4:16 下午
 * @Description: 程序清单7.2
 */
#include <stdio.h>

#define SPACE ' '

int main(void)
{
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);
    return 0;
}
