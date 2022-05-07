#include<stdio.h>
int main()
{
  int n,i,sum=0,res=1,r,d,temp;
  scanf("%d",&n);
  temp=n;
 while(n)
  {
  	r=n%10;
  	sum=sum+r;
  	n=n/10;
  }
  
  n=temp;
  while(n)
  {
  	d=n%10;
  	res=res*d;
  	n=n/10;
  }
   if(sum==res)
   {
   	printf("Spy Number");
   }
   else
   {
   	printf("Not Spy Number");
   }
  
  	
}