#include<stdio.h>
void main(){
    int num;
    int c=1;
    int f=1;
    printf("Enter any number : ");
    scanf("%d",&num);
    do
    {
        f=f*c;
        c++;
    } while (c<=num);
    printf("Factorial of %d is %d",num,f);
    
}