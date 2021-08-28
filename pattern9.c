#include<stdio.h>
void main(){
    int i,j,space,rows;
    printf("Enter number of rows:--");
    scanf("%d",&rows);
    for(i=1;i<=rows-1;i++)
    {
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");
        }
        
for ( j= 1; j<=i; j++)
{
    printf("* ");
}
printf("\n");

    }
     for(i=rows;i>=1;i--)
    {
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");
        }
        
for ( j= 1; j<=i; j++)
{
    printf("* ");
}
printf("\n");

    }

}