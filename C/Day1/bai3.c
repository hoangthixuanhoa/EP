#include <stdio.h>
int main() {
    int num1,num2;
    printf("Nhập số thứ nhất: ");
    scanf("%d",&num1);
    printf("Nhập số thứ hai: ");
    scanf("%d",&num2);
    if(num2==0){
        printf("Không thể chia cho số 0");
    } else{
        float result=(float)num1/num2;
        printf("Kết quả: %.2f",result);
    }
    
    return 0;
}