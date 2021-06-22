/*
 * @Author: 王教鼎
 * @Date: 2021/6/22 11:27 下午
 * @Description: 程序清单11.31
 */
#include <stdio.h>

int main(int argc, char * argv[])
{
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");
    return 0;
}
