/* 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。 */
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int n=2; n<x; n++)
    {
        if(x%n==0)
        { 
            printf("%d*",n); 
            x=x/n; 
            n=2; 
        }
    }
    printf("%d\n",x);
    return 0;
}