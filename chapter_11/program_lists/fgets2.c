/*
 * @Author: 王教鼎
 * @Date: 2021/6/20 11:39 上午
 * @Description: 程序清单11.8
 */
#include <stdio.h>

#define STLEN 10

int main(void)
{
    char words[STLEN];
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done.");
    return 0;
}
