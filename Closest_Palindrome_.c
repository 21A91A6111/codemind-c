#include<stdio.h>
int reverse(int a)
{
    int rev=0,r,temp;
    temp=a;
    while(a>0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a=a/10;
        
    }
    if(temp==rev)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i,n,j,s,v,sf=0,df=0;
    scanf("%d",&n);
    for(i=n+1;i<=10000;i++)
    {
        if(reverse(i)==1)
        {
            s=i;
            df=i-n;
            break;
        }
    }
    for(j=n-1;j>=1;j--)
    {
        if(reverse(j)==1)
        {
            v=j;
            sf=n-j;
            break;
        }
    }
    if(df>sf)
    {
        printf("%d",v);
    }
    else if(df==sf)
    {
        printf("%d %d",v,s);
        
    }
    else
    {
        printf("%d",s);
    }
}





