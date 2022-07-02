#include<stdio.h>
int main()
{
    int a,b,sum=0,res=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            res+=i;
        }
    }
    if(sum==b && res==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}
