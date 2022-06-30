#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],sum=0,diff=0,i,j;
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
            if(a[i][j]%2==0)
            {
                sum+=a[i][j];
            }
            if(a[i][j]%2!=0)
            {
                diff+=a[i][j];
            }
        }
    }
    printf("%d %d",sum,diff);
    
}