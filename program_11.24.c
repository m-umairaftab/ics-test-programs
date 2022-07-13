#include<stdio.h>
void main(){
    int num1, num2;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);
    num1 > num2 ? printf("%d is greater.\n",num1) : printf("%d is greater.\n",num2);
}