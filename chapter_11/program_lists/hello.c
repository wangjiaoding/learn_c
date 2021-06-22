/*
 * @Author: 王教鼎
 * @Date: 2021/6/22 11:43 下午
 * @Description: 程序清单11.32
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int i, times;
    if (argc < 2 || (times = atoi(argv[1])) < 1)
        printf("Usage: %s positive-number\n", argv[0]);
    else
        for (i = 0; i < times; i++)
            puts("Hello, good looking!");
    return 0;
}
