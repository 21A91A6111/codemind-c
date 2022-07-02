#include<stdio.h>
int main()
{
    int n,i,j,a[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                a[j]=1000;
            }
        }
        if(a[i]!=1000)
        {
            if(a[i]%2!=0)
            {
                sum+=a[i];
            }
        }
    }
    printf("%d",sum);
}
