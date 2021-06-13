/*
 * @Author: 王教鼎
 * @Date: 2021/6/13 11:46 下午
 * @Description: 程序清单9.11
 */
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "*************************"

// 显示选择列表
int menu(void);

// 返回预定天数
int getnights(void);

// 根据费率、入住天数计算费用
// 并显示结果
void showprice(double rate, int nights);
