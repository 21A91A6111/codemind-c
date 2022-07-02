#include<stdio.h>
int main()
{
    int n,i,se,a[100],max,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            t=max;
            max=a[i];
            a[i]=t;
        }
    }
    printf("%d",max);
}
