#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,j,i,count=0,c=0;
    scanf("%d%d",&a,&b);
    if(a==1)
    {
        a=2;
    }
    for(i=a;i<=b;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
