#include<stdio.h>
int lcm(int,int);
int main()
{
    int n,m;
    int l;
    printf("enter elements");
    scanf("%d %d",&n,&m);
    l=lcm(n,m);
    return 0;
}
int lcm(int n,int m)
{
    int l;
    int max=0;
    max=(m>n)?m:n;
    {
        printf("max=%d",max);
    }
    while (1) {
        if ((max % n == 0) && (max % m == 0)) {
            printf("The LCM of %d and %d is %d.", n, m, max);
            break;
        }
        max++;
    }
    return 0;
}
