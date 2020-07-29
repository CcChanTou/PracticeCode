/* 打印0~300，步长为20的摄氏温度转华氏温度转换表 */
#include <stdio.h>
int main()
{
    printf("# cel  ->  # fahr\n");
    for (float cel = 300; cel >= 0; cel = cel - 20)
    {
        printf("%3.0f\t%8.1f\n", cel, cel * 1.8 +32);
    }
    return 0;
}
