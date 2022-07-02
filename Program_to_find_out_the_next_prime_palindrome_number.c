#include<stdio.h>
int main()
{
    int n,m,i,q,s,res=0,re;
    scanf("%d",&m);
    if(m>=10&&m<=10000)
    {
    for(n=m+1;n<=100000;n++)
    {
        s=1;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                s=0;
                break;
            }
        }
        if(s==1)
        {
            res=0;
            q=n;
            while(q!=0)
            {
                re=q%10;
                res=(res*10)+re;
                q=q/10;
            }
            if(res==n)
            {
                printf("%d",n);
                break;
            }
        }
    }
    }
}



