#define abs(x) ((x) < 0 ? -(x) : (x)) 
void itob(int n, char s[], w)
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
    while (i < w)
        s[i++] = ' ';
    s[i] = '\0';
    reverse(s);
}