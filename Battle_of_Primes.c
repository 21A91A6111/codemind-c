#include<stdio.h>
int main()
{
    int n1,n2,sum=0,i,t,j,count=0;
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    for(i=1;i<sum;i++)
    {
        t=sum+i;
        count=0;
        for(j=2;j<t/2;j++)
        {
            if(t%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d",i);
            break;
        }
    }
}


