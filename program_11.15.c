#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if (a<c)
        {
            printf("%d is a smallest number.\n",a);
        }
        else{
            printf("%d is a smallest number.\n",c);
        }
    }
    else{
        if (b<c)
        {
            printf("%d is a smallest number.\n",b);
        }
        else{
            printf("%d is a smallest number.\n",c);
        }
    }
}