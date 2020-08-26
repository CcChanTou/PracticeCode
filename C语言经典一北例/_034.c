#include <stdio.h>
void Print(int n){
    if(n){
        printf("hello world\n");
        Print(n-1);
    }
}

int main(){
    int n;
    printf("打印多少次:");
    scanf("%d",&n);
    Print(n);
    return 0;
}