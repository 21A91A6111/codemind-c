#include<stdio.h>
int main()
{
    int x,y,r,m;
    scanf("%d%d",&x,&y);
    for(x;x<=y;x++)
    {
        m=x;
        r=0;
        while(m>0)
        {
            r=r*10+m%10;
            m/=10;
        }
        if(r==x)
        {
            printf("%d ",x);
        }
    }
    
}