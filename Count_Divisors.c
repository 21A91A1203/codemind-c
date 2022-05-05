#include<stdio.h>
int main()
{
    int n,s,e,res,c=0,i;
    scanf("%d%d%d",&s,&e,&n);
    for(i=s;i<=e;i++)
    {
        res=i%n;
    
    
    
    if(res==0)
    {
        c++;
        
    }
}
    printf("%d",c);

}