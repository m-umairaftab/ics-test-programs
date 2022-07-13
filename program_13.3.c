#include<stdio.h>
void max(int a, int b);
void main(){
    int x,y;
    printf("Enter two number : ");
    scanf("%d %d",&x,&y);
    max(x, y);
}
void max(int a, int b){
    if (a>b)
    {
        printf("Maximu number is %d",a);
    }
    else
    {
        printf("Maximu number is %d",b);
    }
}