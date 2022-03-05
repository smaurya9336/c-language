//write a progyam to print alphabetical F pattern
//        * * * *     row=0 or row=8 and col!=0 print star
//        *          col=0 and row!=0 and row!=4
//        *
//        *
//        * * * *
//        *
//        *
//        *
//        * 
#include<stdio.h>
void main(){
    int row,col;
    for(row=0;row<=8;row++){
        for(col=0;col<=4;col++){
            if((row==0 || row==4) && col!=0){
                printf("*");
            }
            else if(col==0 && (row!=0 && row!=4)){
                printf("*");
            }
            else{
                printf("");
            }
        }
        printf("\n");
    }
}