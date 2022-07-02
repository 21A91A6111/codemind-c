#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,v=0,c=0,d=0,sp=0;
    scanf("%[^
]s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
            sp++;
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='O'||s[i]=='E'||s[i]=='I'||s[i]=='U')
            v++;
        else if(48<=s[i]&&57>=s[i])
            d++;
        else
            c++;
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d
",v,c,d,sp);
    return 0;
    
}