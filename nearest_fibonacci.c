#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    int arr[100],j=0,x,y;
    for(i=0;i<n;i++)
    {
        arr[i]=a;
        c=a+b;
        a=b;
        b=c;
        
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=n && arr[i+1]>=n)
        {
            x=arr[i];
            y=arr[i+1];
            break;
        }
    }
    if((n-x)>(y-n))
    {
        printf("%d",y);
    }
    else if((n-x)<(y-n))
    {
        printf("%d ",x);
    
    }
    else if((n-x)==(y-n))
    {
        printf("%d %d",x,y);
    }
}
