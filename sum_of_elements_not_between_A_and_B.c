#include<stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
    int i,sum=0,x,b;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("
%d %d",&x,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            sum+=a[i];
        }
        else if(a[i]>x && a[i]>b)
        {
            sum+=a[i];
        }
        else if (a[i]==x || a[i]==b)
        {
            continue;
        }
    }
    printf("%d",sum);
}