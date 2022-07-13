#include<stdio.h>
#define pl 3.141
void main(){
    float r,area,cir;
    printf("Enter radius : ");
    scanf("%f",&r);
    area=pl*r*r;
    cir=2.0*pl*r;
    printf("Area is %5.2f\n",area);
    printf("Circumference is %5.2f\n",cir);
}