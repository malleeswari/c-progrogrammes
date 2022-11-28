#include<stdio.h>
int main()
{
 	int i, j, r, c, a[10][10], b[10][10], Count = 1;
 	printf("\n Enter Number of rows and columns  :  ");
 	scanf("%d %d", &r, &c);
 	printf("\n  Enter the Matrix Elements \n");
 	for(i = 0; i < r; i++)
  	{
   		for(j = 0;j< c;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
   	//Transpose of matrix 
 	for(i= 0; i < r; i++)
  	{
   		for(j = 0;j< c; j++)
    	{
      		b[j][i] = a[i][j];
    	}
  	}
 	for(i = 0; i < r; i++)
  	{
   		for(j = 0; j < c; j++)
    	{
    		if(a[i][j] != b[i][j])
    		{
    			Count++;  
				break;  		
			}
   	 	}
  	}
  	if(Count == 1)
  	{
  		printf("\n The Matrix that you entered is a Symmetric Matrix ");
	}
	else
	{
		printf("\n The Matrix that you entered is Not a Symmetric Matrix ");
	}
 	return 0;
}
