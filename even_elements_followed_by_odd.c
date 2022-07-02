
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int a[100],i,j=0,b[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
    }
  
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
     printf("%d ",b[i]);   
    }
    
}

