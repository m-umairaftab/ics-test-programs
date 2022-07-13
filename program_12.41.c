#include<stdio.h>
void main(){
    int num=2;
    for (int i = 1; i<=4; i++)
    {
        for (int j = 1; j<=4; j++)
        {
            printf(" %d ",num++);
        }
        printf("\n");
    }
}