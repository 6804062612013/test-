#include<stdio.h>
int main() {
    int k=20,n,i,j,std[50]={0};
    char a[50], keep[50];
    
    scanf("%s", a);

    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
        scanf("%s", keep);
        for(i=0;i<k;i++)
        {
            if(a[i] == keep[i])
            {	
        		if(i<15)
        		{
                	std[j]++;
				}
				else if(i<18)
				{
					std[j]+=2;
				} else
				{
					std[j]+=3;
				}
			}
        }
    }

    for(j=0;j<n;j++)
    {
        printf("std %d => %d\n", j+1, std[j]);
    }
}

