#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],sum=0,i,j,v=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    { if(i!=0&&i!=m-1)
        for(j=0;j<n;j++)
        {
            if(j!=0&&j!=n-1)
            {
             v+=a[i][j];
            }
        }
    }
      printf("%d",v);
    }