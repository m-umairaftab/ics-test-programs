#include<stdio.h>
void main(){
    float r,area,vol;
    printf("Enter Radius : ");
    scanf("%f",&r);
    area=4.0*3.14*r*r;
    vol=(4.0/3.0)*3.14*r*r*r;
    printf("\nArea is %5.2f\n",area);
    printf("Volume is %5.2f\n",vol);
}