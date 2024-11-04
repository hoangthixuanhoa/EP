#include <stdio.h>
int main(){
    int array[5]={4,6,2,16,3};
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            int temp=array[j];
            if (array[i]>array[j]){
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",array[i]);
    }
    int num=1;
    printf("%p",&num);
    return 0;
}