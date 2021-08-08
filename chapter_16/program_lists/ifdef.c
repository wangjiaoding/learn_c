/*
 * @Author: 王教鼎
 * @Date: 2021/8/9 12:18 上午
 * @Description: 程序清单16.9
 */
#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 4

int main(void)
{
    int i;
    int total = 0;
    for (i = 0; i <= LIMIT; i++)
    {
        total += 2 * i * i + 1;
#ifdef JUST_CHECKING
        printf("i = %d, running total = %d\n", i, total);
#endif
    }
    printf("Grand total = %d\n", total);
    return 0;
}

