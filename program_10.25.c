#include<stdio.h>
void main(){
    char book[50];
    printf("Enter name of your favourite book is : ");
    fgets(book,50,stdin);
    printf("\nYour favourite book is : ");
    puts(book);
}