#include<stdio.h>
int prime_comp(int);
int main()
{
    int n,pc;
    printf("enter a number");
    scanf("%d",&n);
    pc=prime_comp(n);
    return 0;
}
int prime_comp(int n)
{
    int i,c=0;
    for(i=1;i<n;i++)
    {
    if(n%i==0)
    {
        c=c+1;
    }
    }
   if(c==2)
   {
       printf("\n composite");
   }
   else
   printf("\n prime");
    return 0;
}
