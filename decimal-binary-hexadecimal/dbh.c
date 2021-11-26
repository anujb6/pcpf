#include<stdio.h>    
#include<stdlib.h>  
int main(){  
    int c;
    printf("1: decimal to binary \n2: decimal to hexadecimal \n Choice: ");
    scanf("%d", &c);
    if(c == 1){
        int a[10],n,i;    
        system ("cls");  
        printf("Enter the number to convert: ");    
        scanf("%d",&n);    
        for(i=0;n>0;i++)    
        {    
        a[i]=n%2;    
        n=n/2;    
        }    
        printf("\nBinary of Given Number is=");    
        for(i=i-1;i>=0;i--)    
        {    
        printf("%d",a[i]);    
        }    
        return 0; 
    }
    if(c == 2){
         long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    // display integer into character
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
    return 0;
    }
}