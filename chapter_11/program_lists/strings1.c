/*
 * @Author: 王教鼎
 * @Date: 2021/6/19 8:53 下午
 * @Description: 程序清单11.1
 */
#include <stdio.h>

#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
    return 0;
}
