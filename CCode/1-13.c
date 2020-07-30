/* 打印输入中单词长度的直方图 - 垂直向 & 水平向 */
/* 垂直向对比水平向多了一个最长长度和一个临时数组 */
#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int words[100]; /* 存放输入的单词长度 */
    int words_tmp[100]; /* 存放数组中有单词 */
    int c; /* 存放输入的字符 */
    int cl = 0; /*字符长度*/
    int state = OUT; /* 是否进入字符串的状态 */
    int words_num = -1; /* 数组下标 */
    int words_num_tmp = -1; /* 数组下标 */
    int max_words_len = 0; /* 最长的数组 */
    for (int i = 0; i < 100; i++)
    {
        /* 初始化这个数组 */
        words[i] = 0;
        words_tmp[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        /* 接收输入 - 采取1-12练习获取一个单词的方式 */
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if(state == IN)
            {
                state = OUT;
            }
        }
        else if (state == OUT)
        {
            state = IN;
            ++words_num;
            ++words[words_num];
            if (max_words_len < words[words_num]) max_words_len = words[words_num];
        }
        else
        {
            ++words[words_num];
            if (max_words_len < words[words_num]) max_words_len = words[words_num];
        }
    }
    /* 绘图 - 垂直 */
    for (int i = 0; i < 100; i++)
    {
        if (words[i] != 0)
        {
            words_tmp[++words_num_tmp] = words[i];
        }   
    }
    for (int k = max_words_len; k>0; k--)
    {
        printf("||");
        for (int j = 0; j <100; j++)
        {
            if (words_tmp[j] == k)
            {
                printf("*");
                words_tmp[j]--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("||||||||||||||||||||||||||||||||||||||||||||||||\n");
    /* 绘图 - 水平 */
    printf("||\n");
    for (int i = 0; i < 100; i++)
    {
        if (words[i] != 0)
        {
            printf("||");
            for (int j = 0; j<words[i]; j++)
            {
                printf("*");
            }
            printf("\n");
        }   
    }
    printf("||||||||||||||||||||||||||||||||||||||||||||||||\n");
    return 0;
}
