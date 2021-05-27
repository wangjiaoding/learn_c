/*
 * @Author: 王教鼎
 * @Date: 2021/5/20 9:40 下午
 * @Description: 第3题
 */
#include <stdio.h>

int main(void)
{
    const int NUMBER_OF_DAYS_IN_A_YEAR = 365;
    int age = 27;
    int days = age * NUMBER_OF_DAYS_IN_A_YEAR;
    printf("你的年龄：%d岁，\n", age);
    printf("你的年龄转换成天数：%d天\n", days);

    return 0;
}
