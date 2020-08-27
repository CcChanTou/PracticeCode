#include <stdio.h>
int main()
{
    char *str;
    printf("please enter string: ");
    scanf("%s", str);
    int length = 0;
    while(str[length++] != '\0')
    {
        ;
    }
    printf("%s\n", str);
    printf("any to exit!\n");
    getchar();
    return 0;
}