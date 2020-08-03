/* invert(x, p, n)，将x中从第p位开始的n个二进制位求反 */
/* 在指定位置制造一串1进行异或 */
unsigned invert(unsigned x, int p, int n)
{
    return x ^ (~(~0 << n) << (p+1-n));
}