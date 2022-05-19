#include<stdio.h>
int stringlength(char *str)
{
    int i;
    for(i=0;str[i]!=NULL;i++);
    return i;
}
void stringreverse(char *str)
{
    char temp;
    int i,j,len;
    len=stringlength(str);
    i=0;j=len-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char str[100];
    int len;
    scanf("%[^
]s",str);
    len=stringlength(str);
    stringreverse(str);
    printf("%s",str);
}