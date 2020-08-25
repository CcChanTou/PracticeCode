/* 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？ */
#include <stdio.h>
int main()
{
    float n = 100;
    float sum = 0;
    for (int i = 0; i<10; i++)
    {
        sum+=n; /* 下降 */
        n /= 2;
        sum+=n; /* 回升 */
    }
    sum-=n; /* 最后一次回升 */
    printf("%f\n", sum);
    printf("%f\n", n);
    return 0;
}