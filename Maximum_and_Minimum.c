#include<stdio.h>
int main()
{
    int n,a[100],i,j,c,d=0,b[100],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {   a[j]=1000;
                    c++;
                }
            }
        }
        if(c==a[i] && a[i]!=1000)
        {  //printf("%d ",a[i]);
            b[d]=a[i];
            d++;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
   // printf("%f",sum);
   // printf("%d",d);
   else
   {
       if(d==1)
    {
        printf("%d %d",b[0],b[0]);
        
    }
    else
    {
    for(i=0;i<d;i++)
    {
       //printf("%d ",b[i]);
       for(j=i+1;j<d;j++)
       {
           if(b[i]>b[j])
           {
               temp=b[j];
               b[j]=b[i];
               b[i]=temp;
           }
       }
    }
    printf("%d %d",b[0],b[d-1]);
    }
   }
}



