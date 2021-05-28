/*
 * @Author: 王教鼎
 * @Date: 2021/5/23 9:22 下午
 * @Description: 程序清单3.10
 */
#include <stdio.h>

int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary:");
    printf(" $_____\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");

    return 0;
}
