#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c;
    double s,area;
    printf("Enter side A : ");
    scanf("%f",&a);
    printf("Enter side B : ");
    scanf("%f",&b);
    printf("Enter side C : ");
    scanf("%f",&c);
    s=(a+b+c)/2.0;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %f\n",area);
}