#include <stdio.h>
#include <string.h>

int countOO(const char *str, int len)
{
    int sum = 0;
    int val = 0;
    for(int i =0 ; i < len; i++ )
    {
        if (str[i]=='O'){
            sum += ++val;
        }else{
            val = 0;
        }
    }
    return sum ;
}

int main()
{
    const char *s = "OOXXOXXOOO";
    int count = countOO(s, strlen(s));
    printf("count: %d\n", count);
}
