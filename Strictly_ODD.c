#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0 && arr[i]%2!=0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}