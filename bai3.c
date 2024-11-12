#include<stdio.h>
#define TAX1 (12.00f)
#define TAX2 (22.00f)
#define TAX3 (32.00f)
int main(){
    // for khác while là while không biết só lần lặp
    // if else
    // VD: tax payable
    float tax_payable,tax=0,income=0;
    do
    {
        printf("Enter your income: ");
        //scanf("%f",&income);
        if((income>0.0) && (income<=9.525))
        {
            tax=0;
            break;
        }
        else if (income<=38.7)
        {
            tax=TAX1;
            break;
        }
        else if (income<=82.5)
        {
            tax=TAX2;
            break;
        }
        else if (income>82.5)
        {
            tax=TAX3+1000;
            break;
        }
        else
        {
            printf("Wrong input!\n");
        }
    } while (1);
    tax_payable=income*(tax/100);
    printf("Your tax payable is: %.3f\n",tax_payable);
    
    //
    int a=0,b=0;
    printf("%d\n",a++);//a=0
    printf("%d\n",++b);//b=1
    
    //pointer
    int num=1;
    int *point_n=&num;
    *point_n=2;
    printf("Value of variable num: %d\n",num);
    printf("Value of variable num: %d\n",*point_n);

    char arr[8] = {0x11,0x22,0x33,0x44,0x55,0x66,0x77,0x88};
    int *pint = (int *)arr;//đọc 4 bytes do là int nên khi trỏ nó sẽ trỏ 4 phần tử đầu tức là 0x11223344
    char *pchar = arr;//đọc 1 byte do là char nên khi trỏ nó sẽ trỏ 1 phần tử đầu tức là 0x11
    *pint++; // 4 bytes tiếp là 4 phần tử tiếp, tức là 0x55667788 nhưng do ... nên in ra bị ngc lại
    *pchar++;
    printf("Value of pint = 0x%x\n",*pint);//x: hexa
    printf("Value of pchar = 0x%x\n",*pchar);

    //VD: cho trc 1 địa chỉ; đọc và thay đổi giá trị của địa chỉ đấy
    long int address = 0x7ffffcbc8;
    int *paddr=(int *)address;
    int *checkp=(int *)address;
    printf("paddr=%p\n",paddr);
    *paddr = 2;
    printf("value=%d\n",*checkp);// kiểm tra xem đã trỏ và thay đổi vào đúng ô nhớ có địa chỉ không



}