#include<stdio.h>
int main()
{
int m, n, i, j, matrix[10][10];
printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d", &m, &n);
printf("Enter the elements of matrix\n");
for (i= 0; i < m; i++)
for (j= 0; j < n; j++)
scanf("%d", &matrix[i][j]);
printf("Middle row of the matrix: ");
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
if (i == (m/2))
{
printf("%d ", matrix[i][j]);
}
}
}
printf("\n");
printf("Middle column of the matrix: ");
for (i= 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
if (j == (n/2))
{
printf("%d\t", matrix[i][j]);
}
}
}
printf("\n");
return 0;
}
