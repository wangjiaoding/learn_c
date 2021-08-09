/*
 * @Author: 王教鼎
 * @Date: 2021/8/9 10:20 下午
 * @Description: 程序清单16.16
 */
#include <stdio.h>
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int main(void)
{
    int n;
    atexit(sign_off);
    puts("Enter an integer:");
    if (scanf("%d", &n) != 1)
    {
        puts("That's no integer!");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }
    printf("%d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");
    return 0;
}

void sign_off(void)
{
    puts("Thus terminates another magnificent program from");
    puts("SeeSaw Software!");
}

void too_bad(void)
{
    puts("SeeSaw software extends its heartfelt condolences");
    puts("to you upon the failure of your program.");
}
