#include<stdio.h>
void main(){
    char u,v='A';
    char *pu,*pv=&v;
    *pv=v+1;
    u=*pv+1;
    pu=&u;
    printf("&u=%x &v=%x",&pu,&pv);
    printf("\n&v=%x",&v);
    printf("\n&u=%x",&u);
    printf("\n&pu=%x",&pu);
    printf("\npv=%x",pv);
    printf("\n*pv=%c",*pv);
    printf("\nv=%c",u);
    printf("\n*pu=%c",*pu);
    printf("\npu=%x",pu);

}