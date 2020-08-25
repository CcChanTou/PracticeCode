/* 题目：要求输出国际象棋棋盘。 */
#include <stdio.h>
int main()
{
    int i, j;
    for (i=0; i<8; i++)
    {
        for (j=0; j<8; j++)
        {
            if ((i+j)%2 == 0)
            {
                printf("%c%c",219,219); /* 修改默认代码页，936（ANSI/OEM-简体中文GBK）为437 OEM-美国 重新运行 */
            }
            else
            {
                printf("  ");
            }   
        }
        printf("\n");
    }
    return 0;
}