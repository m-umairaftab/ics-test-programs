#include<stdio.h>
void main(){
    float base ,height;
    double area;
    printf("Enter base : ");
    scanf("%f",&base); 
    printf("Enter height : ");
    scanf("%f",&height);   
    area=0.5*base*height;
    printf("Area = %5.2f\n",area);
}