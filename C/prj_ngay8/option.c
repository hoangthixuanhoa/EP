#include <stdio.h>
#define size 10
int arr[size] = {0,0,0,0,0,0,0,0,0,0};

int check_input_pos_val(int pos, int value)
{
    int check=0;
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        check=1;
    }
    if (value == 0) {
        printf("Gia tri phai khac 0!\n");
        check=1;
    }
    return check;

}

void input_ele(int pos, int value) {
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

int add_ele(int pos,int val){
    int check=0;
    if(arr[pos]==0)
    {
        arr[pos]=val;
    }
    else
    {
        int index=-1;
        for (int i = pos+1; i < size; i++)
        {
            if(arr[i]==0)
            {
                index=i;
                break;
            }

        }

        if (index != -1){
            for (int j = index; j > pos; j--)
            {
                arr[j]=arr[j-1];
            }
            arr[pos]=val;
        }
        else
        {
            check=1;
        }
        return check;


    }

}

int find_ele(int val)
{
    int find_check=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==val)
        {
            find_check=1;
            break;
        }
    }
    return find_check;
}