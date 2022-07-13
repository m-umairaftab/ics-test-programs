#include<stdio.h>
void main(){
    float cel,faren;
    printf("Enter temperature in celcius : ");
    scanf("%f",&cel);
    faren=9.0/5.0*cel+32;
    printf("Temperature in Fahernheit is %5.2f\n",faren);
}