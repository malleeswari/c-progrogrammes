#include <stdio.h>
int main() {
	int x, i;
	printf("\nintegers: ");
	scanf("%d", &x);
	printf("All the divisor of %d are: ", x);
	for(i = 1; i <= x; i++) {
		if((x%i) == 0){
			if(i%2==0)
			{
				printf("%d\t",i);
			}
		}
	}	
	return 0;
}
