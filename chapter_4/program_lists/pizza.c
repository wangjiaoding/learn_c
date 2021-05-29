/*
 * @Author: 王教鼎
 * @Date: 2021/5/26 11:27 下午
 * @Description: 程序清单4.4
 */
#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}


