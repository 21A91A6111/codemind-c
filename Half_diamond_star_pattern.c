#include<stdio.h>

int main()
{
    int i, j, N, columns;
    scanf("%d",&N);
    if(N>=3)
    {

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            columns++;
        }
        else
        {
           
            columns--;
        }
        printf("
");
    }


    }
else
{
    printf("The pattern is not possible");
}
return 0;
}