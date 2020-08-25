/* 题目：利用递归方法求5!。 */
#include <stdio.h>
int recursion(int);
int main()
{
    int x = recursion(5);
    printf("%d", x);
    return 0;
}
int recursion(int x)
{
    int sum;
    if (x == 0)
    {
        sum = 1;
    }
    else
    {
        sum = x * recursion(x-1);
    }
    return sum;
}