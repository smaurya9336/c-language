#include<stdio.h>
#include<conio.h>
#define N 5 //size of queue
int empty=1;

int qempty(int front,int rear){
    if(front==rear && empty==1)
        return 1;
    return 0;
}
void qadd(int item,int q[],int front,int *rear){
    if(front==*rear && empty==0)
        printf("Queue Full\n");
    else{
        *rear==(*rear+1)%N;
        q[*rear]=item;
        if(front==*rear) empty=0;
    }
}
void qdel(int *temp,int q[],int *front,int rear){
    if(qempty(*front,rear))
        *temp=-1;
    else{
        *front=(*front+1)%N;
        *temp=q[*front];
        q[*front]=0;
        if(*front==rear) empty=1;
    }
}
int qfront(int q[],int front,int rear){
    if(!qempty(front,rear))
        return q[(front+1)%N];
    return 0;
}
void display(int q[],int front,int rear){
    int i;
    printf("\n\n");
    printf("\t\t\t Q U E U E \n");
    printf("\t\t\t---------\n\n");

    printf("\t\t Front  ");
    for(i=0;i<N;i++)
        printf("%d ",i);
    printf("Rear\n");

    printf("\t\t %d\t",front);
   // printf("\t\t %d\t",front);
    for(i=0;i<N;i++)
        printf("----");
    printf("\t %d",rear);

    printf("\n\t\t\t ");
    for(i=0;i<N;i++){
        for(i=0;i<N;i++)
            if(q[i]!=0)
                printf("%d ",q[i]);
            else
                printf("  ");
    }
    printf("\n\t\t\t");
    for(i=0;i<N;i++)
        printf("----");

}
void main(){
    int q[N],front==rear;
    int item,c;

    do{
        printf("\t\t  Menu \n");
        printf("\t 1. Create Circular Queue\n");
        printf("\t 2. Isempty Queue\n");
        printf("\t 3. Top of Queue\n");
        printf("\t 4. insert item in Queue\n");
        printf("\t 5. delete item from queue\n");
        printf("\t 6. Q U I T\n\n\n");


        printf("\t Enter your choice:");
        scanf("%d %d",&front,&rear);
        switch(c){
            case 1: //create
                    front=-1;
                    printf("Queue Created.");
                    break;
            case 2://Is empty
                    if(isempty(front==(front+1)%N))
                        printf("Queue is Empty.");
                    else
                        printf("Stack is not Empty.");
                    break;
            case 3://Top
                    item=peep(front,rear);
                    if(item!=0)
                        printf("Top item of stack is: %d",item);
                    break;
            case 4://push
                    printf("Enter element you want to add :");
                    scanf("%d",&item);
                    insert(item,q,N,&front);
                    break;
            case 5://POP
                    delete(&item,q,&front);
                    if(item!=0)
                        printf("%d deleted",item);
                    break;
            case 6://Quit
                    printf("G O O D B Y E\n");
                    break;
            default:printf("Wrong Choice....");
                    getch();
                    break;
        }
        display(front,rear);
    }
    while(c!=6);
}