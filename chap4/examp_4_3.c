/*  4-3       The Dole Queue, UVa 133 
 * */

#include <stdio.h>

int a[25];
int n,k,m;

int go(int from, int d, int steps)
{
    while(steps--){
        // need to wrap up 
        do { from = (from+d+n-1)%n+1; } while( a[from] == 0 );
    }

    return from;

}

int main()
{
    scanf("%d%d%d",&n, &k, &m);
    for(int i=1; i<=n; i++)
        a[i]=1;

    int p1 =n;
    int p2=1;
    int left = n;
    while(left){
        p1 = go(p1, 1, k);
        p2 = go(p2, -1, m);
        printf("%3d", p1);
        left--;
        if(p1 != p2){
            printf("%3d", p2);
            left--;
        }
        a[p1]= a[p2] = 0; //erase the selected ones
        if(left)
            putchar(',');
    }
    printf("\n");


    return 0;
}

