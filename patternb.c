//      *  * *         col=0 and row>=2 and row<=6  print star
//      *      *       col<=3 and row%3=0  print star
//      *      *       col=4 and row%3!=0   print star
//      *  * *   
//      *      *
//      *      *
//      *  * *
#include<stdio.h>
void main(){
    int row,col;
    for(row=0;row<=6;row++){
        for(col=0;col<=3;col++){
            if(col==0 && (row>=1 && row<=5)){
                printf("*");
            }
            else if(col<=2 && row%3==0){
                printf("*");
            }
            else if(col==3 && row%3!=0)
            {
                printf("*");
            }
           else{
               printf(" ");
           } 
        }
        printf("\n");
    }
}