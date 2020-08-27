#include <stdio.h>
int main(void)
{
    int num = 10;
    do
    {
        printf("%d\n", num);
    } while(--num > 0);
    printf("any to exit!\n");
    getchar();
    return 0;
}