#include<stdio.h>
#include<conio.h>
void main(){
    char str[50];
    printf("Enter a String:--");
    gets(str);
    strrev(str);
    printf("Your String is:--%s",str);
}