/*
 *Palindromes: 
 * 判断字符串是否是回文
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindromes(char *s, int len)
{
    int i;
    for(i=0; i < (len+1)/2; i++ )
    {
        if(s[i] != s[len-i-1])
            return 0;
    }
    return 1;
}

int main()
{
    char s[100];
    while(scanf("%s", s) == 1)
    {
       if( isPalindromes(s, strlen(s)) )
           printf("True");
       else
           printf("False");
    }

    return 0;
}
