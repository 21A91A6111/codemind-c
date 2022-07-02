#include<stdio.h>
int main()
{
    int n,a[100],i,j,c,d=0,b[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
      for(i=0;i<=n;i++)
    {     if(i==n)
         {
             printf("0");
         }
         else
         {
          printf("%d ",a[i]);
         }
    }
    }//   printf("%d",sum);
    else
    {
       for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }   
    }

 
}


