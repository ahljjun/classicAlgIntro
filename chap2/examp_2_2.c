#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int cnt = 0;
    scanf("%d", &n);

    while(n>1)
    {
        if ( n & 1 )
            n = 3 *n +1;
        else
            n = n/2; 

        cnt++;
    } 

    printf("count: %d\n", cnt);

}
