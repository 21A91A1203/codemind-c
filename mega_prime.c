#include<stdio.h>
int main()
{
    int n,c=0,j,d,s=0,i,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n)
        {
            s=0;
            d=n%10;
            j++;
            for(i=1;i<=d;i++)
            {
                if(d%i==0)
                {
                    s++;
                }
            }
            if(s==2)
            {
                k++;
            }
            n=n/10;
        }
            if(k==j)
            {
                printf("Mega Prime");
                return 0;
            }
            else
            {
                printf("Not Mega Prime");
            }
        
    }
    else
    {
        printf("Not Mega Prime");
    }
}