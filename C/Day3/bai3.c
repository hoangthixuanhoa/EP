#include<stdio.h>
void swap_num(int *num1,int *num2){
    int temp= *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int num1,num2;
    printf("Enter first number(a): ");
    scanf("%d",&num1);
    printf("Enter second number(b): ");
    scanf("%d",&num2);
    swap_num(&num1,&num2);
    printf("a=%d; b=%d",num1,num2);
    return 0;
}