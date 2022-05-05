#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,m,mod,res;
    scanf("%d%d%d",&n,&x,&m);
    res=pow(n,x);
    mod=res%m;
    printf("%d",mod);
}