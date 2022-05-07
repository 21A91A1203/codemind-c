#include<stdio.h>
int main()
{
    int n,sum=0,d,r,res,sq,rev=0;
    scanf("%d",&n);
    res=n*n;
      while(n>0)
     {
         d=n%10;
         rev=(rev*10)+d;
         n=n/10;
     }
      sq=rev*rev;
    while(sq>0)
    {
        r=sq%10;
        sum=(sum*10)+r;
        sq=sq/10;
     }
   
    // sq=rev*rev;
     if(res==sum)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}