/* 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。 */
/* 数组存放比较方法 */
/*
#include <stdio.h>
int main()
{
    int bit = 0;
    unsigned long long in;
    int num[20];
    printf("please enter number: ");
    scanf("%llu", &in);
    unsigned long long x = in;
    while(x > 0)
    {
        num[bit++] = x % 10;
        x /= 10;
    } 
    for (int i=0; i<bit/2; i++)
    {
        if (num[i] != num[bit-i-1])
        {
            printf("No!\n");
            break;
        }
        if (i == bit/2 -1)
        {
            printf("Yes!\n");
        }
    }
    return 0;
}
*/
/* 逆序重排法 */
#include <stdio.h>
int main()
{
    int sum = 0;
    int in = 0;
    int temp = 0;
    printf("please enter number: ");
    scanf("%d", &in);
    temp = in;
    while (temp > 0)
    {
        sum = sum * 10 + temp % 10;
        temp /= 10;
    }
    if (sum == in)
    {
        printf("===");
    }
    else 
    {
        printf("***");
    }
    return 0;
}