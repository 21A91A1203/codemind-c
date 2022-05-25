#include<stdio.h>
int main()
{
    int c=0,temp,i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    	if(n%i==0)
    	{
    	
    		sum=sum+i;
		}
		
	}
	 
	 if(sum==n)
	 {
	 	printf("True");
	 }
	 else
	 {
	     printf("False");
	 }
}