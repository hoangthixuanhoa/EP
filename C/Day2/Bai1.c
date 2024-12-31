#include<stdio.h>
#include<stdbool.h>
#define size (10u) // u: unsigned; because size is the size of array, size have to +
int main(){
    int sum_arr=0;
    int arr[size];
    // Enter value and sum 
    for(int i=0;i<size;i++){
        printf("Enter a number %d: ",i);
        scanf("%d",&arr[i]);
        sum_arr += arr[i];

    }

    // Max and Min value in arr
    int max=arr[0], min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("Max value: %d; Min value: %d\n",max,min);


    // Check a random number
    int num, find_n;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i = 0; i < size; i++)
    {
        if(num==arr[i]){
            find_n=1;
            break;
        }
    }
    if(find_n==1) printf("%d in arr\n",num);
    else printf("Cannot find %d in arr\n",num);
    
    
    // duplicate numbers in array
    int duplicateFound = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                duplicateFound = 1;
                break; 
            }
        }
    }
    if (!duplicateFound) {
        printf("Không có phần tử trùng lặp trong mảng.\n");
    }
    
    return 0;
}