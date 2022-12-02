#include<stdio.h>
int main()
{
int i,j,n;
char character;
character='A';
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("%c",character);
        character++;
    }
    printf("\n");
}
return 0;
}
