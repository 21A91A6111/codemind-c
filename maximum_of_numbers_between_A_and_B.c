#include<stdio.h>
int main()
{
    int n,a[100],s[100];
    scanf("%d",&n);
    int i,sum=0,x,b,j=0,max=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("
%d %d",&x,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]<=x)
        {
            continue;
        }
        else if(a[i]>x && a[i]<=b)
        {
            s[j]=a[i];
            j++;
        }
        else if (a[i]==x || a[i]==b)
        {
            continue;
        }
    }
    if(j==0)
    {
        printf("-1");
        return 0;
    }
    else
    { max=s[0];
    for(i=1;i<j;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
        }
    }
    if(max==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
    }
}