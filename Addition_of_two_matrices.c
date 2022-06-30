#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n],sum=0,diff=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          c[i][j]=b[i][j]+a[i][j];
        }
        
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-1)
            {
                printf("%d",c[i][j]);
            }
            else
            {
                printf("%d ",c[i][j]);
              }
        }
        printf("
");
    }
    
    
}