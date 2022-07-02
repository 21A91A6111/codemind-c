#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum+=pow(r,2);
        n=n/10;
        if(n==0)
        {
            if(sum>0&&sum<=9)
            {
                break;
            }
            else
            {
                
                n=sum;
                sum=0;
            }
        }
    }
    if(sum==1||sum==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
