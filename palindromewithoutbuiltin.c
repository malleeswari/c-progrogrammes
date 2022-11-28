#include<stdio.h>
int palindrome(char []);
int main()
{
	char s[100];
int p;
	printf("enter a string");
	scanf("%[^\n]s",s);
	p=palindrome(s);
	return 0;
}
int palindrome(char s[100])
{
	int l,i,flag=1;
	for(i=0;s[i]!='\0';i++)
	{
	l++;
}
for(i=0;i<l/2;i++)
{
	if(s[i]!=s[l-1-i])
	flag=0;
	break;
}
if(flag==1)
{
	printf("\n palindrome");
}
else
{
printf("not a palindrome");
}
return 0;
}
