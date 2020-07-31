/* 打印任意长度的输入 */
#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
int main()
{
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getline(line, MAXLINE)) > 0)
    {
        printf("%d\n", len-1); /* 减去换行符就是字符串的长度拉 */
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