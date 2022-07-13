#include<stdio.h>
void main(){
    int num=1;
    int sum=0;
    while (num<=5)
    {
        printf("%d\n",num);
        sum=sum+num;
        num++;
    }
    printf("Sum is %d\n",sum);
}