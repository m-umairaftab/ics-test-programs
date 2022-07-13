#include<stdio.h>
void main(){
    int n1,n2 ,n3;
    printf("Enter 3-digit number : ");
    scanf("%d",&n1);
    n2=n1%10;
    n1=n1/10;
    n3=n1%10;
    n1=n1/10;
    printf("Number in reverse order : %d%d%d\n",n2,n3,n1);
}