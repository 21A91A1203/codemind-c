#include<stdio.h>
int main()
{
    int a,b,t=2,lcm=1;
    scanf("%d%d",&a,&b);
    while(1)
    {
        if(a%t==0 && b%t==0)
        {
            a=a/t;
            b=b/t;
            lcm=lcm*t;
        }
        else
        {
            t++;
        }
        if(a<t || b<t)
        {
            break;
        }
      
    }
    printf("%d",lcm*a*b);
}