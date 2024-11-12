#include<stdio.h>
#define PI 3.14f

float acreage_of_circle(float r){
    float per=r*2*PI;
    return per;
}
float perimeter_of_circle(float r){
    float per=r*r*PI;
    return per;
}

int main(){
    float r,perimeter,acreage;
    printf("Enter radius(m): ");
    scanf("%f",&r);
    acreage=acreage_of_circle(r);
    perimeter=perimeter_of_circle(r);
    printf("Perimeter of circle: %.2f m²\n",perimeter);
    printf("Acreage of circle: %.2f m",acreage);
    return 0;
}