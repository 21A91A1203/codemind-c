#include<stdio.h>
int main()
{
    int arr[100],i,n,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            m++;
        }
    }
    if(m==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}