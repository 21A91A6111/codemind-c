#include<stdio.h>
int main()
{   
        int n,i;
    scanf("%d",&n);
    int a[107],b[100],j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=n-1;
    i=0;
   int k=0;
    while(i<(n/2) && j>(n/2)-1)
    {
      printf("%d %d ",a[i],a[j]);
        i++;
        j--;
    }
    if(n%2!=0)
    { // b[k+2]=a[n/2];
       printf("%d ",a[n/2]);
        printf("%d",0);
    }
    return 0;
}
