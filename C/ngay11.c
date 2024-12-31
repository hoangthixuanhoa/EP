#include <stdio.h>

int main()
{
    char x = 0xF1;
    x=~(x&(1<<3));
    printf("x=%x",x);
    return 0;
}