/* 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。 */
#include <stdio.h>
int main()
{
    int n, a;
    int num = 0;
    int temp = 0;
    printf("please enter a: ");
    scanf("%d", &a);
    printf("please enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        temp += a;
        num += temp;
        temp *= 10;
    }
    printf("%d\n", num);
    return 0;
}