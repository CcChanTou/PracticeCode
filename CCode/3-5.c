#define abs(x) ((x) < 0 ? -(x) : (x)) 
void itob(int n, char s[], b)
{
    int i, sign, j;
    sign = n;
    i = 0;
    do 
    {
        j = abs(n % b);
        s[i++] = (j <= 9) ? j+'0' : j+'a'-10;
    }
    while ((n / b) != 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}