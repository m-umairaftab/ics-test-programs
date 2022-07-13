#include<stdio.h>
void main(){
    int num;
    long int f=1;
    printf("Enter the ending integer : ");
    scanf("%d",&num);
    printf("\nInteger\t\tFactorial\n");
    for(int i=1;i<=num;i++){
        f*=i;
        printf("%d\t\t%ld\n",i,f);
    }
}