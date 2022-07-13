#include<stdio.h>
void main(){
    int x,y,exc;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    printf("Value in x : %d\n",x);
    printf("Value in y : %d\n",y);
    exc=x;
    x=y;
    y=exc;
    printf("Value in x after exchange : %d\n",x);
    printf("Value in y after exchange : %d\n",y);
}