#include<stdio.h>
int main()
{
    int i,n,s=0,r,d,p=0,k;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    while(s!=0)
    {
        d=s%10;
        if(d%2!=0)
        {
            k=d*d;
            printf("%d",k);
            
        }
        else
        {
            p++;
        }
        s=s/10;
    }
   // printf("%d",k);
}