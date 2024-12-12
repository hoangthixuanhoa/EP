#include <stdio.h>
#define SET(n,val) (val | (1 << n))
#define CLEAR(n,val) (val & (~(1 << n)))

int main()

{
    unsigned char value,value_set,value_clear;
    int n;
    
    printf("Value: ");
    scanf("%c",&value);
    printf("Position: ");
    scanf("%d",&n);

    value_set=SET(n,value);
    printf("Value after set = %c\n",value_set);
    value_clear=CLEAR(n,value);
    printf("Value after clear = %c\n",value_clear);
    return 0;
}