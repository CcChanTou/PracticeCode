#include <stdio.h>
void pr(int);
int main(void)
{
    pr(3);
    printf("any to exit!\n");
    getchar();
    return 0;
}
void pr(int x)
{
    if(x>0)
    {   
        pr(--x);  
        printf("printf: %d\n", x); 
    }
}