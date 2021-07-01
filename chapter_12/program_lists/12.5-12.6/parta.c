/*
 * @Author: 王教鼎
 * @Date: 2021/7/1 10:29 下午
 * @Description: 程序清单12.5
 */
#include <stdio.h>

void report_count();
void accumulate(int k);
int count = 0;

int main(void)
{
    int value;
    register int i;
    printf("Enter a positive integer (0 to quit): ");

    while (scanf("%d", &value) == 1 && value > 0)
    {
        ++count;
        for (i = value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer (0 to quit): ");
    }
    report_count();
    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}
