/* 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。 */
#include <stdio.h>
int main()
{
    int nword = 0;
    int nspace = 0; 
    int nnum = 0;
    int nother = 0;

    char c;
    while ((c = getchar())!= '\n')
    {
        if (c >= '0' && c <= '9')
        {
            nnum++;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            nword++;
        }
        else if (c == ' ')
        {
            nspace++;
        }
        else
        {
            nother++;
        }
    }
    printf("%d\n", nnum);
    printf("%d\n", nword);
    printf("%d\n", nspace);
    printf("%d\n", nother);
    return 0;
}