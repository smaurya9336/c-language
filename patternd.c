//      * * *            col=0 print star
//      *     *          row=0 or row=4 and col%3=0 print star
//      *     *           row%4!=0 and col=3 print star
//      *     *
//      * * *
#include<stdio.h>
void main(){
    int row,col;
    for(row=0;row<=4;row++){
for(col=0;col<=3;col++){
if(col==0){
    printf(" *"); 
}
else if((row==0 || row==4) && col%3!=0){
    printf("*");
}
else if(row%4!=0 && col==3){
    printf(" *");
}
else{
    printf(" ");
}
}
printf("\n");
    }
}