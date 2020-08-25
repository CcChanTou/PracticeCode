/* 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可） */
/* 1,1,2,3,5,8,13,21... */
/* 斐波那契数列问题 */
#include <stdio.h>
int fib(int);
int main()
{
    printf("%d\n", fib(40));  /* 递归处理 */
    int arr[3] = {1, 1, 0};
    for (int i = 0; i<=40; i++)
    {
        if (i==0 || i==1)
            printf("%d\n", arr[i]);
        else
        {
            arr[2] = arr[0] + arr[1];
            printf("%d\n", arr[2]);
            arr[0] = arr[1];
            arr[1] = arr[2];
        }
    }
    return 0;
}
int fib(int x)
{
    if(x == 1 || x == 2)
    {
        return 1;
    }
    else
    {
        return fib(x-1) + fib(x-2);
    }
}