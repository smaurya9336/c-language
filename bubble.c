#include<stdio.h>
#include<conio.h>
void main(){
    int A[]=(34,11,4,56,78,9,15,29,9);
    int i;
    bubble_sort(A,9);
    for(i=0;i<8;i++);
    printf("%d",A[i]);
}
void bubble_sort(int A[],int N){
    int round,i,temp;
    for(round=i;round<=N-1;round++)
        for(i=0;i<=N-1-round;i++)
            if(A[i]>A[i+1])
                A[i+1]=temp;
}     

        
    
