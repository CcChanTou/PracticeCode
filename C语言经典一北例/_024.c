/* 题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。 */
/* 递归实现 */
/*
#include <stdio.h>
float fib(int);
int main()
{
    float num = 0;
    for(int i=1; i<=20; i++)
    {
        num += fib(i+1)/fib(i);
    }
    printf("%f", num);
    return 0;
}
float fib(int x)
{
    if (x==0 || x==1)
    {
        return 1;
    }
    else
    {
        return fib(x-1) + fib(x-2);
    }
}
*/
/* 循环实现 */
#include <stdio.h>
int main()
{
    float sum, temp;
    float a=2;
    float b=1;
    for (int i=0; i<20; i++)
    {
        sum += a/b;
        temp = a;
        a = a+b;
        b = temp;
    }
    printf("%9.6f\n",sum);  
}