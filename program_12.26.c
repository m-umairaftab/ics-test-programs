#include<stdio.h>
void main(){
    long int product=1;
    for (int i = 1; i <=10 ; i+=2)
    {
        product*=i;
    }
    printf("Result is : %ld",product);
}