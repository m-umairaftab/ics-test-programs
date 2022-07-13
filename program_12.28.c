#include<stdio.h>
void main(){
    int table,len,i;
    printf("Enter the number of table : ");
    scanf("%d",&table);
    printf("Enter the length of table : ");
    scanf("%d",&len);
    for ( i = 1; i <=len; i++)
    {
        printf("%d * %d = %d\n",table,i,table*i);
    }
    
}