#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,sum=0,p,res=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
        else
        {
            res=res+arr[i];
        }
    }
    p=abs(sum-res);
    printf("%d",p);
}