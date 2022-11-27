#include<stdio.h>
int perfect(int);
int main()
{
    int n,p;
    printf("enter a number");
    scanf("%d",&n);
    p=perfect(n);
    return 0;
}
int perfect(int n)
{
int i,rem,sum=0;
for(i=1;i<n;i++)
{
    rem=n%i;
    if(rem==0)
    {
    sum=sum+i;
    }
}
if(sum==n)
{
    printf("perfect number");
}
else
{
printf("\n not a perfect number");
}
return 0;
}
