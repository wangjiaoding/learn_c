/*
 * @Author: 王教鼎
 * @Date: 2021/6/20 1:19 上午
 * @Description: 程序清单11.7
 */
#include <stdio.h>

#define STLEN 14

int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");
    return 0;
}
