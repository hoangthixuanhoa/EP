#include <stdio.h>

int choose_choice(void);
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(void)
{
    int a,b,option,result;
    printf("Nhập 2 số nguyên a và b: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    option=choose_choice();
    // Chưa gọn
    // switch (choice)
    // {
    // case 1:
    //     result = a+b;
    //     break;
    // case 2:
    //     result = a-b;
    //     break;
    // case 3:
    //     result = a*b;
    //     break;
    // case 4:
    //     result = a/b;
    //     break;
    // }
    // return 0;

    int (*pfunc[4])(int,int) = {sum,sub,mul,div}; // sắp xếp theo thứ tự 1->4 theo 4 option
    result = pfunc[option-1](a,b);// option: 1,2,3,4 mà mảng là 0,1,2,3 nên là option-1
    printf("Value = %d",result);
}


int choose_choice(void)
{
    int choice;
    printf("===================================\n");
    printf("1. Tổng a và b\n");
    printf("2. Hiệu a và b\n");
    printf("3. Tích a và b\n");
    printf("4. Thương a và b\n");
    printf("===================================\n");
    do
    {
        printf("Nhập 1 số từ 1 đến 4: ");
        scanf("%d",&choice);
        if(choice>4 || choice<1)
        {
            printf("Nhập sai! Nhập lại!\n");
        } else
        {
            break;
        }
    } while (1);
    
   
    return choice;
}
int sum(int a,int b){return (a+b);}
int sub(int a,int b){return (a-b);}
int mul(int a,int b){return (a*b);}
int div(int a,int b){return (a/b);}