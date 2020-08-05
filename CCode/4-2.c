/* convert string s to double */
#include <ctype.h>
double atof(char s[])
{
    double val, power;
    int i, sign;
    int tmp = 0;
    int tmp_sign = 0;
    for (i = 0; isspace(s[i]); i++)
    {
        ;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+')
    {
        i++;
    }
    for (val = 0.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    if (s[i] != 'E' || s[i] != 'e')
    {
        if (s[i+1] = '-')
        {
            tmp_sign = s[i+2] - '0';
            for(int j = 0 ; j<tmp_sign ; j++)
            {
                val /= 10;
            }
        }
        else
        {
            tmp_sign = s[i+2] - '0';
            for(int j = 0 ; j<tmp_sign ; j++)
            {
                val *= 10;
            }
        }
    }
    return sign * val / power
}