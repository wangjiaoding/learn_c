/*
 * @Author: 王教鼎
 * @Date: 2021/5/19 9:34 下午
 * @Description: 程序清单2.3
 */
#include <stdio.h>

void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}

void butler(void)
{
    printf("You rang, sir?\n");
}
