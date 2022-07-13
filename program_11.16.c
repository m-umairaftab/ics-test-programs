#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b){
        if (a==c)
        {
            printf("All numbers are same.\n");
        }
        else{
            printf("All numbers are different.\n");
        }
    }
    else{
        printf("All numbers are different.\n");
    }
}