#include <stdio.h>

int main() {
    char lowercase, uppercase;
    printf("Nhập một chữ cái in thường (a-z): ");
    scanf("%c", &lowercase);

    // Dựa vào mã ASCII để chuyển chữ cái thường sang in hoa
    if (lowercase >= 'a' && lowercase <= 'z') {
        uppercase = lowercase - 32;
        printf("Chữ cái in hoa tương ứng: %c\n", uppercase);
    } else {
        printf("Ký tự không hợp lệ. Vui lòng nhập một chữ cái in thường từ a đến z.\n");
    }

    return 0;
}
