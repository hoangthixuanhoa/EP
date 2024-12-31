#include<stdio.h>

int sum(int a, int b){
    int sum_ab=a+b;
    return sum_ab;
}

int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    int result = sum(num1,num2);
    printf("Result: %d + %d = %d", num1,num2,result);
    return 0;
}