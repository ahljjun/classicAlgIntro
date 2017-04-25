

/*
 * 三位数反转
 * 输入一个三位数，分离出它的百位，十位和个位
 * 反转后输出
 *
 * */
#include <stdio.h>

int main()
{
    int digit;
    scanf("%3d", &digit);

    do{
        printf("%d",digit%10);
    }while(digit /= 10);

    printf("\n");

    return 0;
}
