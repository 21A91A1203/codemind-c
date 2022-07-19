#include<stdio.h>
int main()
{
	int i,j,k,r,a[10][10],c,sum,res=0,min=0;
	scanf("%d%d",&r,&c);
//	scanf("%d%d",&r2,&c2);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<c;j++)
	{
	    sum=0;
		for(i=0;i<r;i++)
		{
		   
		       sum=sum+a[i][j];
		}
		//printf("%d ",sum);
    	if(sum>min)
    	{
    	    min=sum;
    	}
	}
	printf("%d",min);
}
	