#include<stdio.h>
int main()
{
    int arr[100],n,i,max=1000,a,b,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            p++;
            if(arr[i]<max)
            {
                max=arr[i];
            }
        }
    }
    if(p!=0)
    {
    printf("%d",max);
    //printf("%d",sum);
    }
    else
    {
        printf("-1");
    }
}