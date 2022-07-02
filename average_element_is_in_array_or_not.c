
#include<stdio.h>
int main()
{
    int n,i,se,a[100],c=0,sum=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    c=sum/n;
    for(i=0;i<n;i++)
    {
        if(c==a[i])
        {
            d=1;
            break;
        }
    }
    if(d==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}



