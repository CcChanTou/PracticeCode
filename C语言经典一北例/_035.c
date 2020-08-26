/* 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。 */
#include <stdio.h>
void re(char *str, int length);
int main()
{
    char *str;
    printf("please enter string: ");
    scanf("%s", str);
    int length = 0;
    while(str[length++] != '\0')
    {
        ;
    }
    re(str, --length);
    return 0;
}
void re(char *str, int length)
{
    if (length == -1)
    {
        ;
    }
    else
    {
        length--;
        printf("%c", str[length]);
        re(str, length);
    }
}