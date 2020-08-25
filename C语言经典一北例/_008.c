/* 题目：输出9*9口诀。 */
#include <stdio.h>
int main()
{
    int i, j;
    for (i=1; i<10; i++)
    {
        for (j = 1; j<=i; j++)
        {
            printf("%dX%d=%-3d", i, j, i*j);    /* -3d表示左对齐，占3位 */
        }
        printf("\n");
    }
    return 0;
}