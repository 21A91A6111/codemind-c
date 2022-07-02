
#include<stdio.h>
int main()
{
    int n,sum=0,r,s;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        r=s%10;
        s=s/10;
        sum+=r;
        
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
