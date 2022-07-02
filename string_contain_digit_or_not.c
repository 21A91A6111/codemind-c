#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,count=0;
    scanf("%s",s);
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            count++;
        }
    }
    if(count!=0)
    {
    printf("Contains %d digit",count);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}