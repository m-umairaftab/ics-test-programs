#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Maximum number is %d.\n",a);
    }
    else if(b>a && b>c){
        printf("Maximum number is %d.\n",b);
    }
    else{
        printf("Maximum number is %d.\n",c);
    }
}