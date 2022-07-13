#include<stdio.h>
void main(){
    int n,sum;
    sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        sum=sum+(i*i);
    }
    printf("Sum is %d \n",sum);
}