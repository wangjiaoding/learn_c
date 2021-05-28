/*
 * @Author: 王教鼎
 * @Date: 2021/5/19 9:28 下午
 * @Description: 程序清单2.2
 */
#include <stdio.h>

int main(void)
{
    int feet, fathoms;
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
    return 0;
}
