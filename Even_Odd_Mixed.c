
#include<stdio.h>
int main()
{
    int num,e=0,o=0,l,rem;
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        if(rem%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e>0 && o==0)
    {
        printf("Even");
    }
    else if(o>0 && e==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}

