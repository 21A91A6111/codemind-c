#include<stdio.h>
int main()
{
    int a,b,i,d,e;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i%2==1)
        {
            d=a*i;
            printf("%d x %d = %d
",a,i,d);
        }
    }
}