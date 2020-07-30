/* 将输入复制到输出，多个空格使用一个空格替代 */
/* 我自己的写法
#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int state = IN;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && state == IN)
        {
            putchar(c);
            state = OUT;
        }
        else if (c == ' ' && state == OUT)
        {
            continue;
        }
        else
        {
            putchar(c);
            state = IN;
        }
    }
    return 0;
}
*/
/* 标准答案写法 */
#include <stdio.h>
#define NONBLANK '0'
int main()
{
    int c; //接受输入字符
    int lastc; //接受上一个输入字符
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
        }
        else if (lastc != ' ')
        {
            putchar(c);
        }
        lastc = c;
    }
    return 0;
}
