/* 打印长度超过80个字符的所有输入行 */
#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
int main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char save[MAXLINE][MAXLINE]; /* 符合条件的字符串保存到这个数组 */
    int index = 0; /* save数组下标 */
    max = 80; /* 定义为80， 超过80就复制到数组 */
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            copy(save[index], line);
            ++index;
        }
    }
    for(int i = 0; i < index; i++)
    {
        printf("%s", save[i]);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}