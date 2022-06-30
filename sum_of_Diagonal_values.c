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
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
             v+=a[i][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {   
      {
        for(j=0;j<n;j++)
           if(m%2!=0&&n%2!=0)
           {
             if(i!=m/2 && j!=n/2)
            {
              if(i+j==m-1)
              {
                v+=a[i][j];
              }
            }
           }
          else
          {
              if(i+j==m-1)
              {
                v+=a[i][j];
              }
          }
        }
      }
      printf("%d",v);
    }
