#include<stdio.h>
int main()
{
    int a[10];
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter elements into array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
