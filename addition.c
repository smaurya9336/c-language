#include<stdio.h>
#include<conio.h>
void split_no(char s[],char s1[],char s2[]){
    int i,j;
    i=0;
    while(s[i]!='\0' && s[i]!='.')
        s1[i++]=s[i];
    s1[i]='\0';
    j=i;
    i=0;
    if(s[j]!='\0')
        while(s[j++]!='\0')
            s2[i++]=s[j];
    s2[i]='\0';
}

void add_no(char a[],char b[],char sum[]){
    int i=0,s,c=0;
    while(a[i]!='\0' && b[i]!='\0'){
        s=a[i]+b[i]-96+c;
        sum[i]=s%10+48;
        c=s/10;
        i++;
    }
    if(a[i]!='\0')
        while(a[i]!='\0'){
            s=a[i]-48+c;
            sum[i]=s%10+48;
            c=s/10;
            i++;
        }
    
    else
        while(b[i]!='\0'){
            s=b[i]-48+c;
            sum[i]=s%10+48;
            c=s/10;
            i++;
        }
    if(c==1)
        sum[i++]=49;
        sum[i]='\0';
}
void main(){
    char a[100],b[100],sum[100];
    char a1[20],a2[20],b1[20],b2[20];
    int i=0,s,c=0;
    printf("\n\nEnter first number:-\n");
    gets(a);
    printf("\n\nEnter second number:-\n");
    gets(b);
    split_no(a,a1,a2);
    split_no(b,b1,b2);
    //int addition
    strrev(a1);
    strrev(b1);
    add_no(a1,b1,sum);
    strrev(sum);
    printf("\nSum=%s",sum);
}