/*
 * @Author: 王教鼎
 * @Date: 2021/5/21 9:13 下午
 * @Description: 第4题
 */
#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

