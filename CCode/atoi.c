/*
补码
正整数的补码是其二进制表示，与原码相同
负整数的补码是其原码除符号位外的所有位取反再加一
*/

/* atoi: convert s to integer */
int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

/* itoa: convert n to characters in s */
void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0) /* record sign */
        n = -n; /* make n positive */
    i = 0;
    do /* generate digits in reverse order */
    {
        s[i++] = n % 10 + '0';  /* get next dight */
    } 
    while ((n /= 10) > 0);  /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);  
}

