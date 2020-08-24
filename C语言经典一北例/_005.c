/* 题目：输入三个整数x,y,z，请把这三个数由小到大输出。 */
#include <stdio.h>
int main()
{
    int x, y, z;
    int min_num[3];
    printf("please enter x: \n");
    scanf("%d", &x);
    min_num[0] = x;
    printf("please enter y: \n");
    scanf("%d", &y);
    min_num[1] = y;
    printf("please enter z: \n");
    scanf("%d", &z);
    min_num[2] = z;
    for (int i = 0; i<2; i++)
    {
        for (int j = i+1; j<3;j++)
        {
            if (min_num[i]>min_num[j])

            {
                int temp = min_num[i];
                min_num[i] = min_num[j];
                min_num[j] = temp;

            }
        }

    }
    for (int k=0;k<3;k++)
    {
        printf("%d ", min_num[k]);
    }
    printf("\n");
    return 0;
}