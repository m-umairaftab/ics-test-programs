#include<stdio.h>
#include<math.h>
void main(){
    int x=0;
    double sqroot=0.0;
    printf("Enter a number : ");
    scanf("%d",&x);
    if (x>=0)
    {
        sqroot=sqrt(x);
        printf("The square rootof %d is = %1f\n",x,sqroot);
    }
    else
    {
        printf("invalid input.\n");
    }
}