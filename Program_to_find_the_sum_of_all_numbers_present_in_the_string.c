#include<stdio.h>
int main()
{
    int i,sum=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]<='9'&& str[i]>='0')
        {
            sum=sum+(str[i]-'0');
        }
    }
    printf("%d",sum);
}