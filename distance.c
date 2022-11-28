#include<stdio.h>
#include<string.h>
#include<math.h>
int distance(float,float,float,float,float);
int main()
{
	float x2,y2,d,x1,y1;
	printf("enter values");
	scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
	d=distance(x1,x2,y1,y2,d);
	return 0;
}
int distance(float x1,float x2,float y2,float y1,float d)
{
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%f",d);
	return 0;
}
