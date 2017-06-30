
#include <stdio.h>

#define NUM 10000
int a[10];

void splitInteger(int n)
{
    while(n)
    {
        a[n%10]++;
        n = n/10;
    }
}

int main()
{
    for(int i=1; i<=NUM; i++)
    {    
       splitInteger(i); 
    }

    for(int i=0; i<10; i++)
    {
        printf("%d: %d\n", i, a[i]);
    } 
}
