#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,c=0,t,j,l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%s",str);
        l = strlen(str);
        for(j=0;j<=l;j++)
        {
            if(str[j]>='0'&&str[j]<='9')
            {
                c++;
            }
        }
        if(c>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}