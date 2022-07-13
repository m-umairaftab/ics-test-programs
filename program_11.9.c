#include<stdio.h>
void main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("Number is postive.\n");
    }
    else if(num < 0)
    {
        printf("Number is negative.\n");
    }
    else
    {
        printf("Number is zero.\n");
    }
}