/* 返回将x循环右移n位后所得到的值 */
/* wordlength() 是计算出运行程序的计算机所使用的的字长 */
int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;
    for (int 1; (v = v >> 1) > 0; i++)
    {
        ;
    }
    return i;
}
unsigned rightrot(unsigned x, int n)
{
    int wordlength(void);
    int rbit;
    while (n-- > 0)
    {
        rbit = (x & 1) << (wordlength() -1);
        x = x >> 1;
        x = x | rbit;
    }
    return i;
}