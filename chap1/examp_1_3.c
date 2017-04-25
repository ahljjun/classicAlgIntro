
#include <stdio.h>


void swap(int *pa, int *pb)
{
    int temp ;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swap1(int *pa, int *pb)
{
    int a = *pa;
    int b = *pb;

    a = a+b;
    b = a-b;
    a = a-b;

    *pa = a ;
    *pb = b;
}

/*
 * this is not very efficent 
 * refer:
 * http://blog.csdn.net/solstice/article/details/5166912
 *
 * */
void swap2(int *pa, int *pb)
{
    int a = *pa ;
    int b = *pb ;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b; 

    *pa = a;
    *pb = b;
}



int main()
{
    int a , b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    swap1(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    swap2(&a,&b);
    printf("a=%d,b=%d\n",a,b);
}
