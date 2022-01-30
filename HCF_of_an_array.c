#include<stdio.h>
int main() 
{ 
    int n,x[20],i,j,min,found=0,hcf=1;
    scanf("%d",&n);
    
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&x[i]); 
    }
    
    min=x[0]; 
    for(i=1;i<n;i++) 
    { 
        if(x[i]<min)
    {
     min=x[i];
    }
    }
    for(i=min;i>=1;i--) 
    {
     found=0; 
     for(j=0;j<n;j++) 
     {
        if(x[j]%i!=0) 
    { found=1;
                break;
                }
                }
                if(found==0) 
                { 
                    hcf=i;
                    break;
                    }
                    }
                    printf("%d",hcf);
                    return 0;
                    }