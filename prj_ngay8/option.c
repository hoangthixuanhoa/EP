#include <stdio.h>
#define size 10
int arr[size] = {0,0,0,0,0,0,0,0,0,0};
void input_ele(void) {
    int pos, value;
    printf("Vi tri (0-%d): ", size - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Gia tri (khac 0): ");
    scanf("%d", &value);

    if (value == 0) {
        printf("Gia tri phai khac 0!\n");
        return;
    }

    arr[pos] = value;
}
void scan_ele(void) {
    printf("Cac phan tu da nhap:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
}