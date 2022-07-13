#include<stdio.h>
void main(){
    float k;
    double m;
    printf("Enter distance in Kilometers:");
    scanf("%f",&k);
    m=k*1000;
    printf("%f kilometers = %f meters\n",k,m);
}