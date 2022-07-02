#include<stdio.h>
int main()
{
    int n,large=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>large)
        {
            large=r;
        }
        n=n/10;
    }
    printf("%d",large);
}