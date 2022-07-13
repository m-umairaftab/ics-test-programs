#include<stdio.h>
void main(){
    int units,surcharge;
    float bill;
    printf("Enter units consumed : ");
    scanf("%d",&units);
    if(units>500)
    {
        bill=bill *7;
    }
    else if(units>300)
    {
        bill=bill *5;
    }
    else
    {
        bill=bill *2;
    }
    bill=bill+150;
    if (bill>2000)
    {
        bill=bill+(bill*5.0/100.0);
    }
    printf("Total bill=%.2f\n",bill);
}