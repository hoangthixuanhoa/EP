#include <stdio.h>
#include "option.h"
int pos, value, check;
void display_menu(void)
{
    int option;
    do
    {
        printf("\n-----------MENU-----------\n");
        printf("0. Thoat\n");
        printf("1. Nhap phan tu vao mang\n");
        printf("2. In ra cac phan tu da nhap\n");
        printf("3. Chen mot so vao mang\n");
        printf("4. Tim kiem so do trong mang\n");
        printf("Chon: ");
        scanf("%d",&option);
        switch (option)
        {
        case 0:
            break;
        case 1:
            printf("Vi tri muon nhap: ");
            scanf("%d", &pos);
            printf("Gia tri (khac 0): ");
            scanf("%d", &value);
            check=check_input_pos_val(pos, value);
            if(check==0)
            {
                input_ele(pos, value);
                break;
            }
            else break;

        case 2:
            scan_ele();
            break;

        case 3:
            printf("Vi tri muon chen: ");
            scanf("%d", &pos);
            printf("Gia tri (khac 0): ");
            scanf("%d", &value);
            check=check_input_pos_val(pos, value);

            if(check==0)
            {
                int add=add_ele(pos, value);
                if (add==0) printf("Chen thanh cong");
                else printf("Chen khong thanh cong");
                break;
            }
            else break;

            break;
        case 4:
            printf("Gia tri muon tim: ");
            scanf("%d",&value);
            check=find_ele(value);
            if(check==1) printf("Tim thay gia tri %d trong mang\n",value);
            else printf("Khong tim thay gia tri %d trong mang\n",value);
            break;

        default:
            printf("Nhap sai! Nhap lai!\n");
        }
    } while (option!=0);
}
