/*
 * @Author: 王教鼎
 * @Date: 2021/7/7 10:37 下午
 * @Description: 程序清单14.14
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

char * s_gets(char * st, int n)
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);
    
}
