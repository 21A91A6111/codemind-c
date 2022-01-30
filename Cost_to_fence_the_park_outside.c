#include<stdio.h>
int main()
{ 
    int L,B,W,C,area,Tot_Cost; 
    scanf("%d%d%d%d",&L,&B,&W,&C); 
    if(L<=W+W || B<=W+W)
    { 
       area=((L+2*W)*(B+2*W))-L*B; 
        Tot_Cost=area*C; 
        printf("%d",Tot_Cost);
    }
    else 
    { 
       printf("IMPOSSIBLE");
        } 
        return 0; 
}