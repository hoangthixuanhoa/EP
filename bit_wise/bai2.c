#include <stdio.h>
#define SET(pos, n, val) (val | (((1 << n) - 1) << pos))

int main()

{
    unsigned char value;
    int p,n;
    
    printf("Value: ");
    scanf("%c",&value);
    printf("Position start: ");
    scanf("%d",&p);
    printf("Number of bit to set: ");
    scanf("%d",&n);
    value=SET(p,n,value);
    printf("Value after set = %c\n",value);
    return 0;
    
}