/* 题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示 */
#include <stdio.h>
int main()
{
    int in;
    printf("please enter score: ");
    scanf("%d", &in);
    char grade = (in >= 90) ? 'A' : (in < 60 ? 'C' : 'B');
    printf("%d is %c\n", in, grade);
    return 0;
}