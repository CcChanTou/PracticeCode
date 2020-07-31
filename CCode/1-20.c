/* detab 将制表符替换为一定数量的空格 */
#include <stdio.h>
#define reblank 4
int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            for (int i = 0; i<reblank; i++)
            {
                putchar(' ');
            }
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
