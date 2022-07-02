#include<stdio.h>
int main()
{
    int n,temp,rev=0,d,f=0,g=0,i,j;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    for(i=1;i<=temp;i++)
    {
        if(temp%i==0)
        {
            f++;
        }
    }
    for(j=1;j<=rev;j++)
    {
        if(rev%j==0)
        {
            g++;
        }
    }
    if(f==2&&g==2)
    {
        printf("circular prime");
    }
    else if(f==2&&g!=2)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}