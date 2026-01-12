#include<stdio.h>
int main() {
	int a[20][20];
	int i,j,m,n ;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
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
	for(i=0;i<n+1;i++)
	{ j = n;
			a[i][j] = a[0][2] + a[0][3]; 
	} printf("\n");
}
