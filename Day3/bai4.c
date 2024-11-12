#include<stdio.h>
#define PI 3.14f

float perimeter_of_circle(float r){
    float per=r*r*PI;
    return per;
}

int main(){
    float r,perimeter;
    printf("Enter radius(m): ");
    scanf("%f",&r);
    perimeter=perimeter_of_circle(r);
    printf("Perimeter of circle: %.2f m²",perimeter);
    return 0;
}