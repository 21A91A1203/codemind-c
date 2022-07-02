#include<stdio.h>
#include<math.h>
int factcount(int i)
{
    int j,fc=2;
    int sq=sqrt(i);
    if(i==1)
    {
        return 1;
    }
    for(j=2;j<=sq;j++)
    {
        if(i%j==0)
        {
            fc+=2;
        }
    }
    if(sq*sq==i)
    {
        fc-=1;
    }
    return fc;
}
int main()
{
    int i,n,m,fc,c=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        fc=factcount(i);
        if(fc==2)
        {
            c++;
        }
    }
    printf("%d",c);
}