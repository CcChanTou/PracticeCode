/*
题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
*/
/* 递归实现 这里需要理解递归 */
#include <stdio.h>
int age(int);
int main()
{
    printf("%d", age(5));
    return 0;
}
int age(int x)
{
    int base;
    if (x == 1)
    {
        base = 10;
    }
    else
    {
        base = age(x-1) + 2;
    }
    return base;

}