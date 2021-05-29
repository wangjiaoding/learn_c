/*
 * @Author: 王教鼎
 * @Date: 2021/5/28 10:24 下午
 * @Description: 程序清单4.15
 */
#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);
    return 0;
}
