#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int k;
    float r;
    scanf("%d",&n);
    r=sqrt(n);
    k=r;
    if(k==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}

