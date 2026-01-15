#include<stdio.h>
int main() {
	int a[20][20];
	int i,j,m,n,num;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} scanf("%d",&num);
	
	printf("a) ");
	for(i=m-1;i>m-2;i--)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
	} printf("\n");
	
	printf("b) ");
	for(i=0;i<n;i++)
	{ j = 0;
			printf("%d ",a[i][j]);
	} printf("\n");
	
	printf("c) ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j] > a[0][2]) 
			{
				printf("%d ",a[i][j]);
			}
		}
	} printf("\n");
	
	printf("d) ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j] > a[0][2]) 
			{
				printf("%d,%d ",i,j);
			}
		}
	} printf("\n");
	
	printf("e)\n");
	for(i=0;i<m;i++)
	{ 
			a[i][4] = a[i][2] + a[i][3]; 
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%d ",a[i][j]);
		} printf("\n");
	}
	
	printf("f)\n");
	int keep;
	for(i=0;i<m;i++)
	{
			keep = a[i][1] ;
			a[i][1] = a[i][n];
			a[i][n] = keep ;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%d ",a[i][j]);
		} printf("\n");
	}
	
	printf("g)\n");
	for(j=0;j<n+1;j++)
	{
		keep = a[0][j] ;
		a[0][j] = a[m-1][j] ;
		a[m-1][j] = keep;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%d ",a[i][j]);
		} printf("\n");
	}
	
	printf("h) new=[");
	int New[20],nw;
	nw = 0 ;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n+1;j++)
		{
			if((a[i][j] % 2 )== 0)
			{
				New[nw] = a[i][j];
				nw++ ;
			}
		}
	}
	for(i=0;i<nw;i++)
	{ 
		if(i == nw-1)
		{
			printf("%d",New[i]);
		} else printf("%d ",New[i]);
	} printf("]\n");
	
	printf("i)\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n+1;j++)
		{
			if(a[i][j] == num)
			{
				printf("<%d> ",a[i][j]);	
			} else printf("%d ",a[i][j]);
		}
		 if(i == m-1)
		{
		} else printf("\n");
	}
}
