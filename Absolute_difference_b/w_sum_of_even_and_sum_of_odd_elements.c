#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],sum=0,v=0,res=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
        else
        {
            res+=a[i];
        }
    }
    v=sum-res;
    if(v<0)
    {
        v=v*-1;
    }
    printf("%d",v);
}

