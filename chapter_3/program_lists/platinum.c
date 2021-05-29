/*
 * @Author: 王教鼎
 * @Date: 2021/5/21 10:06 下午
 * @Description: 程序清单3.1
 */
#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("Your are easily worth that! if platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}
