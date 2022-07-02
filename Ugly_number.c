
#include<stdio.h>
int ugly(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n<=0)
    {
        return 0;
    }
    else if(n%2==0)
    {
        return ugly(n=n/2);
    }
    else if(n%3==0)
    {
        return ugly(n=n/3);
    }
    else if(n%7==0)
    {
        return ugly(n=n/7);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(ugly(n)==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}

