#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
   int n,f=0,r,s;
   scanf("%d",&n);
   if(prime(n)==1 && n!=1)
   {
       r=n;
       while(n>0)
       {
           s=n%10;
           if(prime(s)==1 && s!=1)
           {
               f=1;
               n=n/10;
           }
           else
           {
               f=0;
               break;
           }
       }
       if(f==1)
       {
           printf("Mega Prime");
       }
       else
       {
           printf("Not Mega Prime");
       }
   }
   else
   {
       printf("Not Mega Prime");
   }
}

