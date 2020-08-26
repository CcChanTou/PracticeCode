/* 题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。 */
#include <stdio.h>
int main()
{
    int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int insert;
    int i, j;
    printf("source array: ");
    for (j=0; j<10; j++)
    {
        printf("%d ", a[j]);
    }
    printf("\nplease enter insert number: ");
    scanf("%d", &insert);
    for (i=0; i<10; i++)
    {
        if (insert<a[i])
        {
            break;
        }     
    }
    if (i == 9)  /* 末尾 */
    {
        a[10] = insert;
    }
    else
    {
        for (int k=10; k > i; k--)
        {
            a[k] = a[k-1];
        }
        a[i] = insert;
    }
    for (j=0; j<11; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}