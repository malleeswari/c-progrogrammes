#include<stdio.h>
#define n 6
void push(int);
void pop();
int peak();
void display();
void sum();
int stack[n];
void min();
void max();
int top;
int main()
{
	top=-1;
	int choice,c;
	int ele;
	do
	{
	printf("\n enter choice\n1.push\n2.pop\n3.peak\n4.display\n5.sum\n6.min\n7.max");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("\n enter an element:");
	scanf("%d",&ele);
	push(ele);
	break;
	case 2:
	pop();
	printf("\n popped element is%d",ele);
	break;
	case 3:
	ele=peak();
	printf("\n element at peak is %d",ele);	
	break;
	case 4:
		display();
		break;
		case 5:
			sum();
				break;
				case 6:
					min();
					break;
					case 7:
						max();
						break;
		default:
			printf("\n invalid input");
	}
	printf("\n do you want to continue:1 yes 2 no");
	scanf("%d",&c);
}
while(c==1);
return 0;
}
void push(int ele)
{
	if(top==n-1)
	{
	printf("stcak overflow\n");
	return;
}
	else
	{
	top=top+1;
	stack[top]=ele;
}
}
void pop()
{
	if(top==-1)
	{
	printf("\n stack underflow\n");
}
	else
	{
	int e=stack[top];
	top=top-1;
}
}
int peak()
{
	if(top==-1){
	printf("\n stack is empty");
	return -1;
}
	else
	{
	return stack[top];
}
}
void display()
{
int i;
if(top==-1)
printf("\n no elemnets to display")	;
else
for(i=top;i>=0;i--)
printf("%d",stack[i]);
}
void sum()
{
	int i,sum=0;
	if(top==-1)
	{
	printf("%d",sum);
}
	else
	{
	for(i=top;i>=0;i--)
	{
	sum=sum+stack[i];
}
	printf("%d",sum);
}
}
void max()
{
	int i,maxi=stack[i];
	if(top==-1)
	{
		printf("\n stack is empty");
		
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			if(stack[i] >maxi)
			maxi=stack[i];
		}
		printf("%d",maxi);
	}	
}
void min()
{
	int i,min=stack[i];
	if(top==-1)
	{
		printf("\n stack is empty");
		
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			if(stack[i] <min)
			min=stack[i];
		}
		printf("%d",min);
	}	
}
