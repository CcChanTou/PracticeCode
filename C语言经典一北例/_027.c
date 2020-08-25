/* 题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。 */
#include <stdio.h>

void f()
{
    char ch;
    if((ch=getchar())!='\n') {
        f();
    }
    if (ch != '\n')
        putchar(ch);
}

void main()
{
    printf("please enter char: ");
    f();
}