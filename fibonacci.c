#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i,arr[100],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=a;
        c=a+b;
        a=b;
        b=c;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


