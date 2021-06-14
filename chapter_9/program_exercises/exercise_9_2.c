/*
 * @Author: 王教鼎
 * @Date: 2021/6/14 4:07 下午
 * @Description: 第2题
 */
#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int row, column;
    printf("请输入要打印的字符: ");
    scanf("%c", &ch);
    printf("请输入要打印的行数和列数: ");
    scanf("%d %d", &row, &column);
    chline(ch, row, column);
    return 0;
}

void chline(char ch, int i, int j)
{
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
