#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n)
{
    if (n<=1) return 0;
    int m = floor(sqrt(n)+0.5); // why 四舍五入？？？
    for(int i=0; i<=m ; i++)
        if( n % i == 0 ) return 0;

    return 1;
}

int main()
{

}
