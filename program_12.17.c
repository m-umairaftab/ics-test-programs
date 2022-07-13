#include<stdio.h>
void main(){
    int a,b,c,r;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter first number : ");
    scanf("%d",&b);
    c=1;
    r=1;
    do
    {
        r=r*a;
        c++;
    } while (c<=b);
    printf("Result is %d\n",r);
}