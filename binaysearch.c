#include<stdio.h>
void main(){
    int i,n,beg,end,item,mid,a[100];
    printf("Enter no of element for array:");
    scanf("%d",&n);
    printf("Enter element for array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the item you want to search:");
    scanf("%d",&item);
    
    beg=0;
    end=mid-1;
    mid=(beg+end)/2;

    while((beg<=end) && a[mid!=item]){
        if(item<a[mid]){
            end=mid-1;}
        else{
            beg=mid+1;
        }
        //mid=(beg+end)/2;

    }
    if(a[mid]==item)
        printf("item foundout %d",mid);
    else
        printf("item not found");
    
}