/*
 * @Author: 王教鼎
 * @Date: 2021/8/9 10:47 上午
 * @Description: 程序清单16.13
 */
#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
    int: "int",\
    float: "float",\
    double: "double",\
    default: "other"\
    )

int main(void)
{
    int d = 5;
    printf("%s\n", MYTYPE(d));
    printf("%s\n", MYTYPE(2.0*d));
    printf("%s\n", MYTYPE(3L));
    printf("%s\n", MYTYPE(&d));
    return 0;
}
