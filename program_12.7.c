#include<stdio.h>
void main(){
    int n;
    int c=1;
    int f=1;
    printf("Enter  number : ");
    scanf("%d",&n);
    while (c<=n)
    {
       f*=c;
       c++;
    }
    printf("Factorial of %d is %d\n",n,f);
    
}