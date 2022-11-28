#include<stdio.h>
#include<string.h>
int name(char []);
void main()
{
	char n[100];
	int l,i;
	printf("enter a character");
	scanf("%[^\n]s",n);
	name(n);
}
int name(char n[100])
{
	int i;
	for(i=0;n[i]!='\0';i++)
	{
		printf("%c-->%d\n",n[i],n[i]);
	}
	return 0;
}
