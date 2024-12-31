#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
    printf("Char Min=%d;    Char max=%d\n", CHAR_MIN,CHAR_MAX);
    printf("Int Min=%d;    Int max=%d\n", INT_MIN,INT_MAX);
    printf("Float Min=%f;    Float max=%f\n", FLT_MIN,FLT_MAX);
    printf("Double Min=%lf;    Double max=%lf\n", DBL_MIN,DBL_MAX);
    printf("Long int Min=%li;    Long int max=%li\n", LONG_MIN, LONG_MAX);
    printf("Short int Min=%d;    Char max=%d\n", SHRT_MIN, SHRT_MAX);
    return 0;
}