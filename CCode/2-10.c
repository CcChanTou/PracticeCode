/* 使用三目运算符的lower函数，直接在main中实现 */
#include <stdio.h>
int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        c >= 'A' && c <= 'Z' ? putchar(c+32) : putchar(c);
    }
    return 0;
}