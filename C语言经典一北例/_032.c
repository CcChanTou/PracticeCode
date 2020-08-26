/* 题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。 */
#include <stdio.h>

int main(void)
{
    char ch;
    int i, j;
    char s[] = "I want to learn English.";
    puts(s);
    printf("请输入要删除的字母: ");
    scanf("%c", &ch);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch)
        {
            for (j = i; s[j] != '\0'; j++)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
        }
    }
    puts(s);
    return 0;
}