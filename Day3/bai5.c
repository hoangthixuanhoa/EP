#include<stdio.h>
#include<stdint.h>
#define SIZE 8
int main(){
    uint8_t source[SIZE] = {0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
	uint8_t destination[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    uint32_t *p_src=(uint32_t *)source;
    uint32_t *p_des=(uint32_t *)destination;
    p_des[0]=p_src[0];
    p_des[1]=p_src[1];
    printf("destination: ");
    for (int i = 0; i < 8; i++) {
        printf("0x%02X ", destination[i]);
    }
    printf("\n");
    return 0;
}