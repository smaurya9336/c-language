//WRITE A PROGRAM TO FIND AREA OF CIRCLE IN C LANGUAGE
#include<stdio.h>
#include<conio.h>
void main ()
{
    int year ;
    clrscr();
    printf("\n Enter year to check:");
    scanf("%d",&year);
    if (year%4==0)
     if(year%400==0)
    printf("1.leap year");
    else if(year%100==0)
    printdf("2.not a leap year");
    else 
    printf ("3. leap year");
    else
    printf("4. not leap year");
    getch();
}