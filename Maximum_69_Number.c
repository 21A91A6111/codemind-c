
#include<stdio.h>
int rev(int n)
{
    int v=0,g;
    while(n!=0)
    {
        g=n%10;
        v=v*10+g;
        n=n/10;
    }
    return v;
}
int change(int c)
{
    int k=c,a[100],j,p=0,i;
    while(c>0)
    {
        j=c%10;
        a[p]=j;
        p++;
        c=c/10;
    }
    for(i=0;i<p;i++)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    int z=0,b=0;
    while(p--)
    {
        b=b*10+a[z];
        z++;
    }
    return b;
}
int main()
{
    int n,c;
    scanf("%d",&n);
    c=rev(n);
    printf("%d",change(c));
}
