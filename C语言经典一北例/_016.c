/* 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。 */
#include <stdio.h>
int main()
{
    int m, n, min;
    printf("please enter m: ");
    scanf("%d", &m);
    printf("please enter m: ");
    scanf("%d", &n);
    min = m <= n ? m - 1 : n - 1;
    for (min; min > 1; min--)
    {
        if (m % min == 0 && n % min == 0)
        {
            break;
        }
    }
    if (min != 1)
    {
        printf("%d\n", min);
        printf("%d\n", m*n/min);
    }
    else
    {
        printf("None");
    }
    return 0;
}