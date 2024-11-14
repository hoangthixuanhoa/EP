#include <stdio.h>

inline int sum(int a,int b); // inline: thay vì gọi hàm và thực hiện quá trình stacking-unstacking thì ta sẽ copy nội dung của hàm vào main; tức là sẽ giống với không gọi hàm nhưng gọn hơn
                            // dùng inline sẽ tăng tốc độ thực thi nhưng đồng thời tăng size of main; giống ko gọi hàm mà vt đầy đủ vào main
    
int main(void)
{
    /*
    Sự khác nhau giữa gọi hàm  và không gọi hàm
    - Khi ta không dùng hàm thì size của hàm main sẽ lớn và gây tốn dung lượng
    VD: Dùng không dùng hàm             Dùng hàm
        for(;;)                       print_func();
        {
            print("a");
        }
        for(;;)                       print_func();
        {
            print("a");
        }
        for(;;)                       print_func();
        {
            print("a");
        }
        for(;;)                       print_func();
        {
            print("a");
        }
    - Nhưng khi dùng hàm thì lại làm chậm chương trình: do khi gọi hàm thì ta phải lưu TRẠNG THÁI TẠM THỜI (stacking) và khi thực thi xong hàm được gọi thì ta pk khôi phục lại trạng thái của hàm main để tiếp tục chương trình (un-stacking), quá trình stacking-unstacking lặp đi lặp lại -> chậm chương trình
    Ưu và nhược điểm khi dùng hàm: dùng hàm dỡ tốn dung lương nhưng phải đánh đổi thời gian thực thi và ngược lại
    */

    int x=1;
    int y=2;
    int z = sum(x,y);
    int (*func_ptr)(int ,int ) = &sum; // Gọi hàm thông qua con trỏ (function pointer)
    printf("x + y = %d\n",(*func_ptr)(x,y));
    

    return 0;
}

inline int sum(int a,int b){
    return (a)+(b);
}