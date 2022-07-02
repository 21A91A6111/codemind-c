#include<stdio.h>
int main()
{
    int n,i,se,a[100],min,t;
    float c=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            t=min;
            min=a[i];
            a[i]=t;
        }
    }https://www.thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=S1o3TXdTK2k1M0c2UjBiRGFCM3hBZz09&Pid=N0oydVg0VWhQUUxza0pqSVZxME8yZz09&Course=UVVLR00zRzlNUzVnQXF5eE51VUNFdz09&Technology=a3RBaFZ5Zjd3SjBkMHppZW9GaDY2QT09&Topic=NUFTQUtmOWNTd2tYeE5ab0ljOEFJZz09
    printf("%d",min);
}



