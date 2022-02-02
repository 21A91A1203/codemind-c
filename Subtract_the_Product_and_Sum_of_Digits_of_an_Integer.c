#include<stdio.h>
int main()
{
    int N,SUM=0,MUL=1,TOT,R;
    scanf("%d",&N);
    while(N!=0)
    {
      R=N%10;
      SUM=SUM+R;
      MUL*=R;
      N=N/10;
    }
  TOT=MUL-SUM;
      printf("%d",TOT);
}