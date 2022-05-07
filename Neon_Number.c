#include<stdio.h>
int main()
{
	int n,k,sum=0,d,i;
	scanf("%d",&n);
	k=n*n;
	for(i=0;i<n;i++)
	{
		d=k%10;
		sum=sum+d;
		k=k/10;
	}
	if(n==sum)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}