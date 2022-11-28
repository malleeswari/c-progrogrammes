#include<stdio.h>
int array_sum(int [],int);
int main()
{
    int a[100];
    int i,n,sum=0;
    printf("enter a numver");
    scanf("%d",&n);
    printf("eneter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=array_sum(a,n);
    return 0;
}
    int array_sum(int a[100],int n)
    {
        int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}
