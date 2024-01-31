// Q 7 :-- W.A.P for Armstrong Number using do-while Loop ?

// 370 = 3*3*3+7*7*7+0*0*0
//     = 27+343+0
//     = 370 

#include<stdio.h>
#include<conio.h>

void main()
   {
       int Num,Rem,ArmNum,OrgNum;
 
       printf("\n Enter Ur Number :--");
       scanf("%d",&Num); // 145

       OrgNum=Num;
       ArmNum=0;

       do
         {
              Rem=Num%10;
              ArmNum=ArmNum+Rem*Rem*Rem;
              Num=Num/10; 
          }while(Num>=1);

      if(OrgNum==ArmNum)
          printf("\n Given Number is Armstrong Number.");
      else
           printf("\n Number is Not an Armstrong Number."); 


   }