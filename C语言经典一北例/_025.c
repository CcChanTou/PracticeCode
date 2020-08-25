/* 题目：求1+2!+3!+...+20!的和。 */
#include <stdio.h>
int main()
{
    double sum = 0;
    double temp = 1;
    for (int i = 1; i <=20 ; i++)
    {
        temp *=i;
        sum += temp;
    }
    printf("%Lf\n",sum);  
    return 0;
}