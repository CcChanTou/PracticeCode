/* 打印菱形 参考答案 */
#include<stdio.h>

int main(void)
{
    int i, j;
    int n;   
    printf("num of : ");
    scanf("%d", &n);  
    for (i = 0; i < 2*n+1; i++)
    {
        for (j = 0; j < 2*n+1; j++)
        {
            if (i+j >= n && i+j <= 3*n && j-i <= n && i-j <= n) /* 这四个条件代表菱形的四个空角 */
            {
                printf("*");
            }
            else printf(" ");
        }
        putchar(10); /* 换行符 */
    }
    return 0;
}