#include <stdio.h> 
int triangle(int,int,int);
int main()
{
    int a,b,c,t;
    printf("enter angles of a triangle");
    scanf("%d %d %d",&a,&b,&c);
    t=triangle(a,b,c);
    return 0;
}
int triangle(int a,int b,int c)
{
    if(a+b+c==180)
    {
    printf("triangle if formed");
    }
    else
    {
    printf("not formed");
    }
    return 0;
}
