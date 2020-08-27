#include<stdio.h>
int main(void)
{
    int arr[3] = {3, 9, 7};
    for (int i=0; i<3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("please enter any to exit");
    getchar();
    return 0;
}