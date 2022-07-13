#include<stdio.h>
void main(){
    float c,r;
    c=3.0;
    r=1.0;
    do
    {
        r=r+1.0/c;
        c+=2;
    } while (c<=99);
    printf("Result is%f",r);
}