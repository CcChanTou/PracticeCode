/* 用*号输出字母C的图案 */
#include <stdio.h>
void pr(int);
int main(void)
{
    putchar(' ');
    pr(5);
    pr(7);
    pr(2);
    pr(2);
    pr(7);
    putchar(' ');
    pr(5);
    return 0;
}

void pr(int i)
{
    for (int j = 0; j < i; j++)
    {
        putchar('*');
    }
    printf("\n");
}