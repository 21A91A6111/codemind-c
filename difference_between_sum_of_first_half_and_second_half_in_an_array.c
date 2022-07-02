#include<stdio.h>
int main()
{
    int n,a[100],s[100];
    scanf("%d",&n);
    int i,sum=0,x,b,diff=0,res=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
            sum+=a[i];
    }
    for(i=n-1;i>=n/2;i--)
    {
            res+=a[i];
    }
    if(sum>res)
    {
    diff=sum-res;
    }
    else
    {
        diff=res-sum;
    }
    printf("%d",diff);
}


