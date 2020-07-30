/* 将之前的温度转换写成函数的形式 */
#include <stdio.h>
float celTofahr(float);
int main()
{
    float ret = celTofahr(30.0);
    printf("%3.1f", ret);
    return 0;
}

float celTofahr(float cel)
{
    float fahr;
    fahr = cel * 1.8 + 32;
    return fahr;
}
