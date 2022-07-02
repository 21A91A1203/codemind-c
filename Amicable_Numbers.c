#include<stdio.h>
int main()
{
    int a,b,sum=0,res=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
  //  printf("%d",sum);
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            res=res+i;
        }
    }
   // printf("%d  ",res);
    if(b==sum && a==res)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}