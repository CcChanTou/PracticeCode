#include <stdio.h>
int main()
{
    int in;
    printf("please enter number: ");
    scanf("%d", &in);
    switch (in)
    {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
            break;
        case 4:
            printf("4\n");
            break;
        default:
            printf("default\n");
    }
    printf("any to exit!\n");
    getchar();
    return 0;
}