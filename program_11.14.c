#include<stdio.h>
void main(){
    int month;
    printf("Enter the number of month : ");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        printf("Number of days in this month are 31.\n");
    }
    else if(month==4 || month==6 || month==9 || month==11){
        printf("Number of days in this month are 30.\n");
    }
    else if(month==2){
        printf("Number of days in this month are 28 or 29.\n");
    }
    else{
        printf("Invalid Input\n");
    }
}