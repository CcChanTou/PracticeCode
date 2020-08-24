/* 题目：输入某年某月某日，判断这一天是这一年的第几天？ */
#include <stdio.h>
int main()
{
    int P[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int R[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day, DAY;
    DAY = 0;
    printf("please enter year: \n");
    scanf("%d", &year);
    printf("please enter month: \n");
    scanf("%d", &month);
    printf("please enter day: \n");
    scanf("%d", &day);
    if (year % 4 == 0 && year % 100 != 0)
    {
        /* 闰年计算：被4整除而不能被100整除 或 被100整除也可以被400整除 */
        for (int i = 0; i<= (month-2) && (month-2)>=0; i++){DAY += R[i];}   
        DAY += day;
        printf("this is %d year of %d day!\n", year, DAY);
    }
    else
    {
        /* 平年 */
        for (int i = 0; i<= (month-2) && (month-2)>=0; i++){DAY += P[i];}
        DAY += day;
        printf("this is %d year of %d day!\n", year, DAY);
    }
    return 0;
}