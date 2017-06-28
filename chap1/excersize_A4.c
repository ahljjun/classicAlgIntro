#include <stdio.h>

int main()
{
    printf("res=%lf\n", 1.0/0.0);
    printf("res=%lf\n", 0.0/0.0);
    printf("res=%d\n", 1/0);

    return 0;
}
