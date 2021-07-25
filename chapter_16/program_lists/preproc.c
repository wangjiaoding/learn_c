/*
 * @Author: 王教鼎
 * @Date: 2021/7/25 11:26 下午
 * @Description: 程序清单16.1
 */
#include <stdio.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive.- Oscar Wilde"
#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
    int x = TWO;
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");
    return 0;
}
