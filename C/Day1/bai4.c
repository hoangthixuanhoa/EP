#include <stdio.h>
int main(){
    int num;
    do
    {
        printf("Nhập 1 số nguyên từ 1-6: ");
        scanf("%d",&num);
        if (num < 1 || num > 6) {
            printf("Giá trị không hợp lệ. Vui lòng nhập lại.\n");
        }
        
    } while ((num>6)||(num<1));
    switch (num)
    {
    case 1:
        printf("I");
        break;
    case 2:
        printf("IT");
        break;
    case 3:
        printf("ITP");
        break;
    case 4:
        printf("ITPL");
        break;
    case 5:
        printf("ITPLU");
        break;
    case 6:
        printf("ITPLUS");
        break;
    }

    return 0;
}