#include<stdio.h>
void main(){
    int height;
    int heightInCent;
    printf("Enter height in inches : ");
    scanf("%d",&height);
    heightInCent=height*2;
    printf("Your height in centimeters is : %d\n",heightInCent);
}