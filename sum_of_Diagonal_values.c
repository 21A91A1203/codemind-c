#include<stdio.h>
int main()
{
    int r,c,a[10][10],sum=0,i,j,k;
    scanf("%d%d",&r,&c);
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
          if(i==j)
          {
              sum=sum+a[i][j];
          }
        }
        if(i!=c-1-i)
        {
        sum=sum+a[i][c-1-i];
        }
    }
    printf("%d",sum);
}