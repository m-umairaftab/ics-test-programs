#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    if (num1==num2)
    {
        printf("Numbers are same.\n");
    }
    else
    {
        printf("Numbers are different.\n");
    }
}