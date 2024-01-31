#include<stdio.h>
#include<conio.h>
void main(){
    int Res;
    asm mov (ax,02)
    asm mov (bx,04)
    asm add (ax,bx)
    asm mov (Res,ax)
    printf("Result is --%d",Res);
}