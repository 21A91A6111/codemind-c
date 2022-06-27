#include<stdio.h>
int main()
{
    int m,i,d=0,n,s=0,t,c=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
		c=0;
        t=i;
        while(t)
        {
        	d=t%10;
        	if((d==0)||(i%d!=0))
        	{
        		c++;
			}
			t=t/10;
		}
		if(c==0)
		{
			printf("%d ",i);
		}
    }
}