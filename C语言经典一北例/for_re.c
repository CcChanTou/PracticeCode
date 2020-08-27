#include <stdio.h>
int main(void)
{
    int i;
    for (i=0; i<10; i++)
    {
        printf("%d\n", i);
    }
    printf("any to exit!\n");
    getchar();
    return 0;
}