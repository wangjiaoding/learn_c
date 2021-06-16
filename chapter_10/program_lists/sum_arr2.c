/*
 * @Author: 王教鼎
 * @Date: 2021/6/16 7:52 下午
 * @Description: 程序清单10.11
 */
#include <stdio.h>

#define SIZE 10

int sump(int * start, int * end);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld\n", answer);
    return 0;
}

int sump(int * start, int * end)
{
    int total = 0;
    while (start < end)
    {
        total += *start;
        start++;
    }
    return total;
}
