#include<stdio.h>
int main()
{
    int num,i;
    float sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+(float)1/i;
    }
    printf("%0.2f",sum);
    return 0;
}