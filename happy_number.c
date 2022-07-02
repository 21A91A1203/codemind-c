#include<stdio.h>
int main()
{
    int sum=0,n,i,d,res=0;
    scanf("%d",&n);
    while(res!=1 && res!=4)
    {
        res=0;
          while(n>0)
            {
                d=n%10;
                res=res+(d*d);
                n=n/10;
            }
       n=res;
           
    }
           
           if(res==1)
            {
                printf("True");
            }
            else
           {
           	  printf("False");
		   }
            
}