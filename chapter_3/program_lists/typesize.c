/*
 * @Author: 王教鼎
 * @Date: 2021/5/23 9:10 下午
 * @Description: 程序清单3.8
 */
#include <stdio.h>

int main(void)
{
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}
