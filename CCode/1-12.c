/* 以每行一个单词的形式打印输入 */
/*
和一开始预想的不一样，这是对一行文字的处理，将一行文字中的单词按每行一个打印；总体思路是先对非单词字符处理，这个处理分IN和OUT的情况，然后是对单词的打印，打印分第一个字母和后面字母的打印
OUT模式：代表目前处于空格/换行符/制表符中
IN模式：代表目前在单词中
1.if->对空格/换行符/制表符的处理：如果是OUT模式，那么代表此前已经在这些符号中了，直接不管，如果是IN模式，那么代表刚从单词中出来，打印换行符并进入OUT模式
2.else if->这是遇到第一个单词字符的情况，打印并进入IN模式
3.else->这是遇到第2~N个字符的情况，直接打印

*/
#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int state, c;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;  
            }
        }
        else if (state == OUT)
        {
            state = IN;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
