#include<stdio.h>
int main(){
    int num;
    // void var_void=5;
    // scanf("%d", &num);
    printf("adress of num = %p\n",&num);
    printf("size of int = %d\n",sizeof(int));
    printf("size of char = %d\n",sizeof(char));
    printf("size of float = %d\n",sizeof(float));
    printf("size of double = %d\n",sizeof(double));
    printf("size of void = %d\n",sizeof(void));
    // printf("%d", var_void);
    printf("--------------------------------------\n");
    printf("Cấp giấy phép lái xe\n");
    int age;
    printf("Nhập tuổi: ");
    scanf("%d",&age);
    if(age>=18){
        printf("Đủ tuổi được cấp giấy");
    } else if(age>0){
        printf("Chưa đủ tuổi.");
    } else {
        printf("Nhập chưa đúng");
    }
    
    return 0;
}