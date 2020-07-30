/* 打印各个字符出现频度的直方图 - 题目是这么个题目，就做了获取字符的QAQ */
#include <stdio.h>
int main()
{
    int c;  /* 接收输入字符 */
    int bc[26];
    int ac[26];
    int num[10];
    int other;
    for (int i = 0; i < 26; i++)
    {
        bc[i] = 0;
        ac[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        num[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++num[c-'0'];
        }
        else if (c >= 'a' && c <= 'z')
        {
            ++ac[c-'a'];
        }
        else if (c >= 'A' && c <= 'Z')
        {
            ++bc[c-'A'];
        }
        else
        {
            ++other;
        }
    }
    for (int i = 0; i<26; i++)
    {
        printf("%d ", bc[i]);
    }
    printf("\n");
    for (int i = 0; i<26; i++)
    {
        printf("%d ", ac[i]);
    }
    printf("\n");
    for (int i = 0; i<10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n%d\n", other);
    return 0;
}
