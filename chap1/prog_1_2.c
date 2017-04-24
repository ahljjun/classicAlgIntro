// 涉及数字类型
#include <stdio.h>


int main()
{
    printf("%.1f\n", 8.0/5.0);
    printf("%.2f\n", 8.0/5.0);
    printf("%.1f\n", 8/5);
    printf("%d\n", 8.0/5.0);
    return 0;
}

/*
 * gcc -o prog_1_2 prog_1_2.c
 * $ ./prog_1_2
 * 1.6  ===> .1f , print 小数点后一位
 * 1.60 ===> .2f , print 小数点后二位
 * 1.6  ===> 相当与convert成了float
 * 309504 ====> 浮点数编码相关(每次执行结果不一定相同)
 */
