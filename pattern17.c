#include<stdio.h>
void main()
{
    int i,j,rows,number=1;
    printf("Enter no of rows u want to print:--");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++)
        {
         printf("%d",number); 
         number++;  
        }
        printf("\n");
    }
}