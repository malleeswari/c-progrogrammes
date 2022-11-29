#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start;
void create();
void display();
void insert_at_begin(int);
void insert_at_end(int);
void insert_at_position(int);
void delete_at_begin();
void delete_at_end();
void delete_at_position();
void count_nodes();
void sum_nodes();
void search_nodes();
int main()
{
int choice,c,d;
start=NULL;
create();
display();	
do
{
	printf("\n1.INSERT AT BEGIN\n2.INSERT AT END\n3.INSERT AT POSITION\n4.DISPLAY\n5.DELETE AT BEGIN\n6.DELETE ATEND\n7.DELETE AT POSITION\n8.COUNT\n9.SUM\n10.SEARCH");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter an elemnt");
			scanf("%d",&d);
			insert_at_begin(d);
			break;
		case 2:
		printf("\nEnter an elemnt");
			scanf("%d",&d);
			insert_at_end(d);
			break;
		case 3:
			printf("\nEnter an elemnt");
			scanf("%d",&d);
			insert_at_position(d);
			break;
		case 4:
			display();
			break;
		case 5:
			delete_at_begin();
			break;
		case 6:
			delete_at_end();
			break;
		case 7:
			delete_at_position();
			break;
		case 8:
			count_nodes();
			break;
		case 9:
			sum_nodes();
			break;
		case 10:
			search_nodes();
			break;			
	}
	printf("\nDO YOU WANT TO CONTINUE");
	scanf("%d",&c);
}while(c==1);
}
void create()
{
	int n,i;
	struct node *new_node,*t;
	printf("\nEnter number of nodes");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter an element");
		scanf("%d",&new_node->data);
		new_node->next=NULL;
		if(start==NULL)
		start=new_node;
		else
		{
			t=start;
			while(t->next!=NULL)
			t=t->next;
			t->next=new_node;
		}
	}
}
void display()
{
	struct node *t;
	if(start==NULL)
	printf("\nNo nodes in the list");
	else
	{
		t=start;
		printf("\n");
		while(t!=NULL)
		{
			printf("%d->",t->data);
			t=t->next;
		}
	}
	
}
void insert_at_begin(int d)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=d;
	new_node->next=NULL;
	new_node->next=start;
	start=new_node;
}
void insert_at_end(int d)
{
struct node *new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=d;
new_node->next=NULL;
struct node *t=start;
while(t->next!=NULL)
t=t->next;
t->next=new_node;	
}
void insert_at_position(int d)
{
struct node *new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=d;
new_node->next=NULL;
struct node *t=start;
int pos,i;
printf("\nEnter position");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
t=t->next;
new_node->next=t->next;
t->next=new_node;
}
void delete_at_begin()
{
	if(start==NULL)
	{
		printf("\nNO nodes in the list");
		return;
	}
	else
	{
		struct node *t=start;
		start=start->next;
		free(t);
		printf("\n First node sucessfully deleted");
	}
}
void delete_at_end()
{
	if(start==NULL)
	{
		printf("\nNO nodes in the list");
		return;
	}
	else
	{
	struct node *t=start;
while(t->next->next!=NULL)
t=t->next;
free(t->next);
t->next=NULL;	
}
}
void delete_at_position()
{
	int pos,i;
	if(start==NULL)
	{
		printf("\nNO nodes in the list");
		return;
	}
	else
	{
		printf("\nEnter position");
		scanf("%d",&pos);
		struct node *t=start;
		struct node *t1;
		for(i=1;i<pos-1;i++)
		t=t->next;
		t1=t->next;
		t->next=t1->next;
		free(t1);
		printf("\nNode sucessfully Deleted");
	}
}
void count_nodes()
{
	int c=0;
	if(start==NULL)
	printf("\n NO nodes in the list");
	else
	{
		struct node *t=start;
		while(t!=NULL)
		{
			t=t->next;
			c=c+1;
		}
		printf("\nNUmber of nodes in the list:%d",c);
	}


}
void sum_nodes()
{
	int sum=0;
	if(start==NULL)
	{
		printf("\n sum=%d",sum);
		return;
	}
	else
	{
		struct node *t=start;
		while(t!=NULL)
		{
			sum=sum+t->data;
			t=t->next;
		}
		printf("\n sum=%d",sum);
	}
}
void search_nodes()
{
	int flag=0;
	int key;
	struct node *t;
	if(start==NULL)
	{
		printf("\n NO nodes in the list");
		return;
	}
	else
	{
		t=start;
		printf("\nEnter key element");
		scanf("%d",&key);
		while(t!=NULL)
		{
			if(t->data==key)
			{
				flag=1;
				break;
			}
			t=t->next;
		}
		if(flag==1)
		printf("\nElement is in the list");
		else
		printf("\nElement not in the list");
	}
}
