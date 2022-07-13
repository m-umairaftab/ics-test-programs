#include<stdio.h>
void main(){
    int num1,num2,num3,num4,sum,product;
    float avg;
    printf("Enter 4 number : ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    sum=num1+num2+num3+num4;
    product=num1*num2*num3*num4;
    avg=sum/4.0;
    printf("Sum of all numbers : %d\n",sum);
    printf("product of all numbers : %d\n",product);
    printf("average of all numbers : %5.2f\n",avg);
}