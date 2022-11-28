#include <stdio.h>
#include<math.h>
int amstrong(int);
int main ()
{
int n,am;
printf (" Please enter an integer:" );  
scanf ( "%d", &n );
am=amstrong(n);
return 0;
}
int amstrong(int n)
{
int	y, rem, sum = 0, a = 0;
y = n;
while (y!= 0)   
{
y = y / 10;
a++;
}
y = n; 
while (y > 0 )   
{
rem = y % 10;
sum = sum +  pow( rem, a );
y = y / 10;
} 
if ( sum == n )   
{
printf (" %d is an Armstrong number \n", n);
}
else
{
printf ( "%d is not an Armstrong number \n",n );
}
return 0;
}
