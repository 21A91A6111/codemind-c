
#include<stdio.h>
int main()
{
        int m,n,v=0,i,j,a[10][10];
        scanf("%d%d",&m,&n);
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
                if(i==0||i==m-1)
                {
                    v+=a[i][j];
                }
                else if(i>0&&i!=m-1)
                {
                    if(j==0||j==n-1)
                    {
                        v+=a[i][j];
                    }
                }
            }
        }
        printf("%d",v);
}