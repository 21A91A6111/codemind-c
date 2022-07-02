#include<stdio.h>
int main()
{
    int n,a[100],i,j,c,d=0,b[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
  //      printf("%d ",a[i]);
    }
    
    for(i=0;i<n;i++)
    { c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {  a[j]=1000;
                    c++;
                }
            }
        }
        if(a[i]!=1000)
        { 
            printf("%d %d ",a[i],c);
        }
    }

    //   printf("%d",sum);
    

 
}
