#include<stdio.h>
void main(){
    char name[20],address[30];
    int age;
    printf("Enter your name : ");
    fgets(name,20,stdin);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your address : ");
    fgets(address,30,stdin);
}