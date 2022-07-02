#include<stdio.h>
int main()
{
    int num,r,k=0;
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        k=k*10+r;
        num=num/10;
    }
    printf("%d",k);
}


