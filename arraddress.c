#include <stdio.h>
//#include <alloc.h>
#include <conio.h>
void main()
{	int lb1,ub1,lb2,ub2;
	int l1,l2,e1,e2,i,j,k;
	int b[30][30],*a,*c;
	int rm_pos,cm_pos;

	clrscr();
	printf("Enter dimension details of 2D Matrix\n");
	printf("Enter lower and upper bound of Ist Dimesion\n");
	scanf("%d %d",&lb1,&ub1);
	printf("Enter lower and upper bound of 2nd Dimesion\n");
	scanf("%d %d",&lb2,&ub2);

	l1=ub1-lb1+1;
	l2=ub2-lb2+1;
	e1=0-lb1;
	e2=0-lb2;

	printf("Enter matrix Elements\n");
	k=1;
	for(i=lb1;i<=ub1;++i)
		for(j=lb2;j<=ub2;++j)
		{  	printf("Enter element at loc b[%d][%d] :",i,j);
			//scanf("%d",&b[e1+i][e2+j]);
			b[e1+i][e2+j]=k++;
		}

	//Declare Linear array
	a=(int*)malloc(l1*l2*sizeof(int));

	printf("\n\nMatrix B is\n\t\t");
	for(i=lb2;i<=ub2;++i)
	printf("%d\t",i);
	printf("\n\t\t");
	for(i=lb2;i<=ub2;++i)
	printf("-------");
	printf("\n");

	//column-Major Array
	k=0;
	for(i=0;i<l2;++i)
		for(j=0;j<l1;++j)
			c[k++]=b[j][i];



	k=0;
	for(i=lb1;i<=ub1;++i)
	{	printf("\t%d:\t",i);
		for(j=lb2;j<=ub2;++j)
		{	printf("%d\t",b[e1+i][e2+j]);
			a[k++]=b[e1+i][e2+j]; //row-major array
		}
		printf("\n");
	}

	printf("\nMatrix in linear array(Row-Major)\n");
	for(i=0;i<l1*l2;++i)
		printf("%d\t",a[i]);

	printf("\nMatrix in linear array(Column-Major)\n");
	for(i=0;i<l1*l2;++i)
		printf("%d\t",c[i]);

	printf("\n\nEnter pos i,j of element you want to access :\n");
	scanf("%d %d",&i,&j);
	e1=i-lb1;
	e2=j-lb2;
	rm_pos=e1*l2+e2;
	cm_pos=e2*l1+e1;
	printf("Element at pos b[%d][%d]=%d ",i,j,b[e1][e2]);
	printf("\nIn Roj Major at pos %d =%d ",rm_pos+1,*(a+rm_pos));
	printf("\nIn Column Major at pos %d =%d ",cm_pos+1,*(c+cm_pos));

	
}
