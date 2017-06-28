/*
 *计算阶乘之和
 *
 * */
#include <stdio.h>

int main()
{  
    int n ; 
    scanf("%d", &n);

    int factor = 1;
    int sum = factor;
    
    for(int i=2; i<=n; i++)
    {
        printf("factor: %d, sum: %d\n", factor, sum);
        factor = i * factor;
        sum += factor;
    }

    return 0;
}
