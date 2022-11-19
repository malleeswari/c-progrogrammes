#include <stdio.h>
void product(int a[][10], int b[][10],int s[][10], int r, int c, int m, int n);
int main()
{
	int a[10][10], b[10][10],s[10][10],r,c,m,n,i,j,k;
	printf("Enter rows and column for first matrix: ");
	scanf("%d %d",&r,&c);
	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &m,&n);
	while (c!=m)
	{
		printf("Error\n");

	}
      product(a,b,s,r,c,m,n);
	return 0;
}
void product(int a[][10], int b[][10],int s[10][10], int r, int c, int m, int n)
{
	int i,j,k;
	printf("\n enter elements into matrix A");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n enter elements into matrix B");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<n;j++)
			{
				s[i][j]=0;
				for(k=0;k<n;k++)
				{
				s[i][j]=s[i][j]+a[i][k]*b[k][j];
			}
			}
		}
		printf("\n matrixA=\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			printf("\t%d",a[i][j]);
			printf("\n");
		}
		printf("\n matrixB=\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			printf("\t%d",b[i][j]);
			printf("\n");
		}
		printf("resultant matrix=\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<n;j++)
			printf("\t%d",s[i][j]);
			printf("\n");
		}	
	}	
	
