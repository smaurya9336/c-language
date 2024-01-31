//wap to check no is a armstrong or not using for  loop
#include<stdio.h>
#include<conio.h>
void main(){
    int num,Rem,OrgNum,ArmNum;
    printf("enter your number:--");
    scanf("%d",&num);
    OrgNum=num;
    
    for(ArmNum=0;num>=1;num=num/10){
        Rem=num%10;
        ArmNum=ArmNum+Rem*Rem*Rem;
        
    }
    if(OrgNum==ArmNum){
        printf("given number is a Armstrong number");
    }
    else{
        printf("not a Armstrong number");
    }
}
