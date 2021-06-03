/*
 * @Author: 王教鼎
 * @Date: 2021/6/3 11:57 下午
 * @Description: 程序清单6.5
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
     const double ANSWER = 3.14159;
     double response;
     printf("What is the value of pi?\n");
     scanf("%lf", &response);
     while (fabs(response - ANSWER) > 0.0001)
     {
         printf("Try again!\n");
         scanf("%lf", &response);
     }
     printf("Close enough!\n");
     return 0;
}
