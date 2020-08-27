#include <stdio.h>
int main(void)
{
    int key;
    printf("please enter the key: ");
    scanf("%d", &key);
    if (key == 886)
    {
        printf("pass\n");
    }
    else
    {
        printf("error\n");
    }
    printf("any to exit!\n");
    getchar();
    return 0;
}