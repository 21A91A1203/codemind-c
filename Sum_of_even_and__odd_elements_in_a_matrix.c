#include<stdio.h>
int main()
{
	int i,j,k,r,a[10][10],c,sum=0,res=0;
	scanf("%d%d",&r,&c);
//	scanf("%d%d",&r2,&c2);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   if(a[i][j]%2!=0)
		   {
		       sum=sum+a[i][j];
		   }
		   else
		   {
		       res=res+a[i][j];
		   }
		}
	}
	printf("%d %d",res,sum);
}
	