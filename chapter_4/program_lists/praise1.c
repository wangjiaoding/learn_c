/*
 * @Author: 王教鼎
 * @Date: 2021/5/25 9:42 下午
 * @Description: 程序清单4.2
 */
#include <stdio.h>

#define PRAISE "You are an extraordinary being." // 这里是不需要分号的

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRAISE);

    return 0;
}
