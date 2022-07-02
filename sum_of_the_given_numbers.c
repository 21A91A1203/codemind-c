#include<stdio.h>
int main()
{
    int a[100],n,b[100],c[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d
",c[i]);
    }
}