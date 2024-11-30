#include <stdio.h>
#include "option.h"
void display_menu(void)
{
    int option;
    do
    {
        printf("\n-----------MENU-----------\n");
        printf("1. Nhap phan tu vao mang\n");
        printf("2. In ra cac phan tu da nhap\n");
        printf("3. Thoat\n");
        printf("Chon: ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            input_ele();
            break;
        
        case 2:
            scan_ele();
            break;
        
        case 3:
            break;

        default:
            printf("Nhap sai! Nhap lai!\n");
        }
    } while (option!=3);
}
