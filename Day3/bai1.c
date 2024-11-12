#include<stdio.h>
void helloworld(int count){
    for(int i=0;i<count;i++)
    {
        printf("Hello world\n");
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    helloworld(n);
    return 0;
}