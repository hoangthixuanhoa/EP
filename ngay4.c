#include <stdio.h>
#define PI 3.14f

void swap_pointer(int *a, int *b); // Khai báo hàm(function declaration): luôn ở phần đầu của chương trình
int sum(int x, int y); // int ở đầu hàm "int sum()" là function protype

void circle(float radius,  float *perimeter, float *acreage);

int main(void){

    /*
    Truy cập trực tiếp là lấy gtri từ chính biến có gtri ấy
    Truy cập gián tiếp là lấy gtri thông qua 1 biến khác (con trỏ) -> Chậm hơn so với truy cập trực tiếp do khi truy cập gián tiếp cần thực hiện một số bước trung gian rồi ms truy cập
    */

    int m=3,n=4;
    
    // swap_pointer(&m,&n);// gọi hàm (Function argument); truyền vào con trỏ: tham chiếu (pass by reference) (VD: &m,&n)
    // printf("m = %d, n = %d\n",m,n);
    // printf("m + n = %d\n",sum(m,n));//truyền trực tiếp gtri vào hàm: tham trị (pass by value)

    float r,perimeter,acreage;
    printf("Enter radius of a circle: ");
    scanf("%f",&r);
    circle(r,&perimeter,&acreage);
    printf("acreage = %.2f, perimeter = %.2f\n",acreage,perimeter);

    int arr[10];
    printf("%p\n",arr); // bản thân arr là 1 con trỏ trỏ tới địa chỉ của phần tử đầu tiên của mảng
    pprintf("%p\n",&arr[0]);

    return 0;

}

void circle(float r,  float *perimeter, float *acreage)
{
    *perimeter=(r*2*PI);
    *acreage=(r*r*PI);
}

void swap_pointer(int *a, int *b) 
{
    // Nội dung hàm (function content)
    int temp = *a;
    *a=*b;
    *b=temp;
}
// p,q và x,y có mối quan hệ copy
/* 
    copy: cùng giá trị nhưng khác ô nhớ (địa chỉ)
   x là copy của p
   y là copy của q
*/
int sum(int x, int y)
{
    return(x+y);
}