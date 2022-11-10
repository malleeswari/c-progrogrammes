#include <stdio.h>
int main()
{
   int m, n, i, j, mat[10][10], t[10][10];
   printf("Enter rows and columns :");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix");
   for (i= 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("\t%d", &mat[i][j]);
     }
 }
         printf("\nmatrix is\n");
         for (i= 0; i < m;i++)
         {
         printf("\n");
      for (j = 0; j < n; j++)
      {
      printf("%d\t",mat[i][j]);
  }
}
   for (i = 0;i < m;i++)
   {
   printf("\n");
      for (j = 0; j < n; j++)
      {
         t[j][i] = mat[i][j];
}
}
printf("transpose of a matrix is:");
   for (i = 0; i< n; i++) {
   	printf("\n");
      for (j = 0; j < m; j++)
      {
         printf("%d\t", t[i][j]);
      printf("");
   }
}
   return 0;
}
