#include<stdio.h>
#include<conio.h>
void main(){
    int num ,cnt;
    printf("enter the number:");
    scanf("%d",&num);
    cnt=0;
    do{
        cnt++;
        num=num/10;
    
    }while(num>=1);
    printf("number of digit is %d",cnt);
}