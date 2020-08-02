/* 编写函数any(s1, s2) 将s2中的任意字符在s1中第一次出现的位置作为结果返回，如果不包含，返回-1 */
/* 直接在main中举例实现 */
#include <stdio.h>
int main()
{
    char s1[] = "asdfghj";
    char s2[] = "sf";
    int i, j, k;
    for (i = 0; s2[i]!='\0'; i++)
    {
        for(j = 0; s1[j]!='\0' && s1[j] != s2[i]; j++)
        {
            ;
        }
        if (s1[j] == '\0')
        {
            printf("%c is -1\n", s2[i]);
        }
        else
        {
            printf("%c is %d\n", s2[i], j);
        }
        
    }
    return 0;
}