// write a program to find cartesion product of two sets
#include<stdio.h>
#include<conio.h>
void main(){
    int a[10],b[10],c[10],i,j,k;
    printf("enter element in set a:--");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements in set b:--");
    for(j=0;j<4;j++){
        scanf("%d",&b[j]);
    }
    printf("Cartesion product=");
    printf("{");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        printf("(%d,%d)",a[i],b[j]);
        printf(",");
        }

    }
    printf("}");
}