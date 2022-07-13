#include<stdio.h>
void main(){
    int e,s;
    printf("Enter starting number : ");
    scanf("%d",&s);
    printf("Enter ending number : ");
    scanf("%d",&e);
    while (s<=e)
    {
        if (s%2==0)
        {
            printf("%d\n",s);
        }
        s++;
    }
    
}