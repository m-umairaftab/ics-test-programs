#include<stdio.h>
void main(){
    int s=0;
    float avg;
    for (int  i = 1; i <=10; i++)
    {
        printf("%d\n",i);
        s=s+i;
    }
    avg=s/10.0;
    printf("Average : %2f\n",avg);
}