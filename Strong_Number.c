#include<stdio.h>
int main()
{
    int n,i,sum=0,r,temp,fact;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}