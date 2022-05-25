#include<stdio.h>
int main()
{
    int n,arr[100],i,se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}