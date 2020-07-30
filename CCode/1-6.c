/* 1. 验证表达式 getchar()!=EOF 的值是0还是1
   2. 打印 EOF 的值
 */
#include <stdio.h>
int main()
{
    printf("%d\n", getchar() != EOF); //ctrl + z 就是0
    printf("%d\n", EOF); // 打印int格式的EOF
    printf("%f\n", EOF);
    return 0;
}
