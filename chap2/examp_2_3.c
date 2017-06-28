
/*
 * 计算 
 * pi/4 = 1 - 1/3 + 1/5 - 1/7 + ...
 * 直到最后一项小于10(-6)  
 *
 *
 *
 * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum =0 ;
    int n = 1;
    double delta ;
    double sign = 1.0;
    do{
        delta =  1.0/(2*n-1);
        sum = sum+ sign * delta;
        sign = (-1.0) * sign ; 
        n++;
    } while( delta >=  1e-6 );
        
    printf("n = %d, sign= %f, delta=%f, sum = %.6f\n", n, sign, delta, sum);

}
