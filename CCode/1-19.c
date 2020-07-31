/* 实现reverse */
#include <stdio.h>
#define MAXLINE 1000
void getline(char line[], int maxline);
void reverse(char line[]);
int main()
{  
    char line[MAXLINE]; /* current input line */
    
    getline(line, MAXLINE);
    reverse(line);
    printf("%s", line);
    return 0;
}

/* getline: read a line into s, return length */
void getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }
    s[i] = '\0';
}

void reverse(char line[])
{
    char tmp[MAXLINE]; /* save input line */
    int len = 0;
    int j = 0;
    while (line[len] != '\0')
    {
        ++len;
    }
    for (int i = len-1; i>=0; i--)
    {
        tmp[j] = line[i];
        j++;
    }
    for (int i = 0; i<len; i++)
    {
        line[i] = tmp[i];
    }
    line[len] = '\0';
}
