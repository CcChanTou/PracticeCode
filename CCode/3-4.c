/* 
在数的对二的补码表示中
除标志位剩（字长-1）位，那么最大的正数是2的（字长-1）次方，最大的负数就是取反
但是在补码的表示中，负数的补码是除标志位外取反+1，对负数的处理不能通过直接加上符号得到正数
原先的itoa函数中是将负数直接取反获取正数处理，在新的itoa函数中取绝对值处理，绕过了对负数补码取正的问题，也就可以处理最大的负数了
以下来自标准答案
*/
#define abs(x) ((x) < 0 ? -(x) : (x)) /* 取绝对值 */
void reverse(char s[])
void itoa(int n, char s[])
{
    int i, sign;
    sign = n;
    i = 0;
    do 
    {
        s[i++] = abs(n % 10) + '0';
    }
    while ((n / 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
