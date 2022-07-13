#include<stdio.h>
void main(){
    int sum;
    for (int i = 0; i < 100; i+=2)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);
}