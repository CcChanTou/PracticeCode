/* 题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。 */
#include <stdio.h>

int main(){
    int k,n,count=0;
    printf("enter: ");
    scanf("%d",&n);
    while(n){
        k=n%10;
        printf("%d ",k);
        count++;
        n/=10;
    }
    printf("\n%d",count);
    return 0;
}