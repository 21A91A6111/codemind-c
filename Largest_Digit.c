#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        if(sum<rem)
        {
            sum = rem;
        }
        num=num/10;
    }
    printf("%d",sum);
}