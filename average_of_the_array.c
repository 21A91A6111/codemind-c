#include<stdio.h>
int main()
{
    int n,i,se,a[100],d=0;
    float c=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    c=float(sum/n);
    printf("%.2f",c);
}
