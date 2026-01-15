#include<stdio.h>
int main() {
    int k,n,i,j,std[50]={0};
    char a[50], keep[50];

    scanf("%d",&k);
    scanf("%s", a);

    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
        scanf("%s", keep);
        for(i=0;i<k;i++)
        {
            if(a[i] == keep[i])
                std[j]++;
        }
    }

    for(j=0;j<n;j++)
    {
        printf("std %d => %d\n", j+1, std[j]);
    }
}

