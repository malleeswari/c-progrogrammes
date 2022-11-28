
#include<math.h>
int cube(int );
int main()
{
	int n,c;
	printf("enter a number");
	scanf("%d",&n);
	c=cube(n);
	return 0;
}
int cube(int n)
{
	int i,c;
	for(i=1;i<n;i++)
	{
		c=i*i*i;
		printf("%d\n",c);
	}
	return 0;
}
