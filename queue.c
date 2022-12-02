#include<stdio.h>
#define size 5
int queue[size];
int front,rear;
void enqueue(int);
int dequeue();
void display();
void min();
void max();
int main()
{
	int ele;
	int choice,c;
	front=-1;
	rear=-1;
	do
	{
		printf("\n enter\n1.enqueue\n2.dequeue\n3.display\n4.min\n5.max\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n enter an element:");
				scanf("%d",&ele);
				enqueue(ele);
				break;
				case 2:
					ele=dequeue();
					printf("\n removed element is%d",ele);
					break;
					case 3:
						display();
						break;
						case 4:
							min();
							break;
							case 5:
								max();
								break;
						defualt:
							printf("\n invalid choice");
		}
		printf("\n do you want to continue1.yes2.no");
		scanf("%d",&c);
	}
	while(c==1);
	return 0;
	}
	void enqueue(int ele)
{
	if (front>rear||rear==size-1)
	printf("\n queue is full");
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	rear=rear+1;
	queue[rear]=ele;
	}
int dequeue()
{
	int e;
	if(front==-1||front>rear)
	{
		printf("\n queue is empty");
	return -1;
	}
	else
	{
	e=queue[front];
	front=front+1;
	return e;	
	}
}
void display()
{
	int i;
	if(front==-1||front>rear)
	{
		printf("\n queue is empty");
		return ;
	}
	else
	{
	printf("\n queue elements are:");
	for(i=front;i<=rear;i++)
	printf("%d",queue[i]);	
	}	
}
void min()
{
	int i,mini=queue[i];
	if(front==-1||front>rear)
	{
		printf("\n queue is empty");
		return ;
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			if(queue[i]< mini)
			mini=queue[i];
		}
		printf("%d",mini);
	}
	
}
void max()
{
	int i,maxi=queue[i];
	if(front==-1||front>rear)
	{
		printf("\n queue is empty");
		return ;
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			if(queue[i] >maxi)
			maxi=queue[i];
		}
		printf("%d",maxi);
	}
}
