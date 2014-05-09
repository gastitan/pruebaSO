/* WRITE A MENU DRIVEN C PROGRAM TO IMPLEMENT   MEMORY MANAGEMENT ALGORITHMS.  1.FIRST FIT   2.BEST FIT  3.WORST FIT*/
#include<stdio.h>

void accept(int a[],int n);
void display(int a[],int n);
void sort(int a[],int n);
void first_fit(int psize[],int np,int msize[],int nm);
void worst_fit(int psize[],int np,int msize[],int nm);
void procesar_algoritmo();

void accept(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d ",a[i]);
	}
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void first_fit(int psize[],int np,int msize[],int nm)
{
	int i,j,itot,etot,flag[30]={0};
	itot=etot=0;
	for(i=0;i<np;i++)
	{
		for(j=0;j<nm;j++)
		{
			if(flag[j]==0 && msize[j]>=psize[i])
			{
				flag[j]=1;
				itot=itot+msize[j]-psize[i];
				break;
			}
		}
		if(j==nm)
			printf("\n\nTHERE IS NO SPACE FOR PROCESS %d ",i);
	}
	for(i=0;i<nm;i++)
	{
		if(flag[i]==0)
			etot=etot+msize[i];
	}
	printf("\n\nPROCESSES::");
	display(psize,np);
	printf("\n\nMEMORY HOLES::");
	display(msize,nm);
	printf("\n\nTOTAL SUM OF INTERNAL FRAGMENTATION = %d ",itot);
	printf("\n\nTOTAL SUM OF EXTERNAL FRAGMENTATION = %d ",etot);

}
void worst_fit(int psize[],int np,int msize[],int nm)
{
	int i,j,itot,etot,temp[30],flag[30]={0};
	itot=etot=0;
	for(i=0;i<nm;i++)
		temp[i]=msize[i];

	sort(temp,nm);
	for(i=0;i<np;i++)
	{
		for(j=nm-1;j>=0;j--)
		{
			if(flag[j]==0 && temp[j]>=psize[i])
			{
				flag[j]=1;
				itot=itot+temp[j]-psize[i];
				break;
			}
		}
		if(j==nm)
			printf("\n\nTHERE IS NO SPACE FOR PROCESS %d ",i);
	}
	for(i=0;i<nm;i++)
	{
		if(flag[i]==0)
			etot=etot+temp[i];
	}
	printf("\n\nPROCESSES::");
	display(psize,np);
	printf("\n\nMEMORY HOLES::");
	display(temp,nm);
	printf("\n\nTOTAL SUM OF INTERNAL FRAGMENTATION = %d ",itot);
	printf("\n\nTOTAL SUM OF EXTERNAL FRAGMENTATION = %d ",etot);

}

/*************************************************************************/
void procesar_algoritmo()
{
	int ch,np,nm,psize[30],msize[30];
	//clrscr();
	printf("\nENTER NO OF PROCESSES::");
	scanf("%d",&np);
	printf("\n\nENTER SIZES OF PROCESSES::");
	accept(psize,np);
	printf("\nENTER NO MEMORY HOLES::");
	scanf("%d",&nm);
	printf("\n\nENTER SIZES OF MEMORY HOLES::");
	accept(msize,nm);

	while(1)
	{
		printf("\n\n\t\t**MAIN MENU**");
		printf("\n\n\tMEMORY MANAGEMENT");
		printf("\n\n\t1.FIRST FIT");
		printf("\n\n\t2.BEST FIT");
		printf("\n\n\t3.WORST FIT");
		printf("\n\n\t4.QUIT");

		printf("\n\nENTER YOUR CHOICE::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n\nFIRST FIT::\n");
				first_fit(psize,np,msize,nm);
				break;
			case 2:
				printf("\n\n\tBEST FIT::\n");
				//best_fit(psize,np,msize,nm);
				break;
			case 3:
				printf("\n\n\tWORST FIT::\n");
				worst_fit(psize,np,msize,nm);
				break;
			case 4:
				break;
			default:
				printf("\n\nPLEASE ENTER CORRECT CHOICE!!");
		}
		//getch();
	}
}
