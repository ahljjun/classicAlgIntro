// 输入输出实验

#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}

/*
 *output:
 *$ ./prog_1_15
12 2
12 2

$ ./prog_1_15 ==> 换行符号 不影响
12
2
12 2

$ ./prog_1_15  ====> 换行符，制表符，空格等不影响
                12
                2
                12 2

$ ./prog_1_15 ==> 字符's' overflow了，32767 = 0xFFFF
12 s
12 32767
 *
 *
 *
 * */
