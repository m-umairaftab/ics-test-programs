#include<stdio.h>
void main(){
    int num1,num2,num3,max;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    printf("Enter 3rd number : ");
    scanf("%d",&num3);
    max=num1;
    if (num2>max)
    {
        max=num2;
    }
    if (num3>max)
    {
        max=num3;
    }
    printf("maximum number is : %d\n",max);
    
        
}