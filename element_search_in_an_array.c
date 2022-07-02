#include<stdio.h>
int main()
{
    int n,i,se,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("
%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }else
    {
        printf("False");
    }
}
