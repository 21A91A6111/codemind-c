#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l,i,c=1;
    scanf("%[^
]s",s);
    l = strlen(s);
    for(i=0;i<=l;i++)
    {
        if (s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
    
}