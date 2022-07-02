#include<stdio.h>
int main()
{
    int n,a[100],i,v=0,se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("
%d",&se);
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            v++;
        }
    }
    printf("%d",v);
}
