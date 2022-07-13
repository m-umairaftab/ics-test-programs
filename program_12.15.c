#include<stdio.h>
void main(){
    int num,c;
    c=1;
    printf("Enter any number : ");
    scanf("%d",&num);
    do
    {
        printf("%d*%d=%d\n",num,c,num*c);
        c++;

    } while (c<=10);
    
}