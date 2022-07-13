#include<stdio.h>
void main(){
    char ch;
    printf("Please enter an alhabet : ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
        printf("you entered vowel.\n");
    }
    else{
        printf("you entered consunent.\n");
    }
}