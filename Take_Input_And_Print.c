#include<stdio.h>
#define MAX 20
int main()
{
	char buf[MAX];
	fgets(buf, MAX, stdin);
	printf("%s
", buf);
	return 0;
}