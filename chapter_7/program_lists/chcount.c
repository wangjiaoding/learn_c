/*
 * @Author: 王教鼎
 * @Date: 2021/6/5 5:38 下午
 * @Description: 程序清单7.6
 */
#include <stdio.h>

#define PERIOD '.'

int main(void)
{
    char ch;
    int charcount = 0;
    while ((ch = getchar()) != PERIOD)
    {
        if (ch !='"' && ch != '\'')
        {
            charcount++;
        }
    }
    printf("There are %d non-quote characters.\n", charcount);
    return 0;
}
