#include<stdio.h>
void main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(!(num%2==0)){
        printf("You entered odd number.\n");
    }
    else{
        printf("You entered even number.\n");
    }
}