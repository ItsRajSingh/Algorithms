#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node* createnode()
{
	struct link* node;
	node=(struct node *)malloc(sizeof(struct node));
	return node;
	
	
	
}
void putdata(struct node *node)
{
	int data;
	printf("Enter value\n");
	scanf("%d",&data);
	node->data=data;
	node->link=NULL;
	
	
}
int getans()
{
	int ans;
	printf("Enter 0 to stop or any other integer to continue\n");
	scanf("%d",&ans);
	return ans;
}

void showdata(struct node *node)
{
	while(node!=NULL)
	{
		printf("%d",node->data);
		node=node->link;
	}
}


int main()
{
	struct node *head=NULL;
	struct node *node=NULL;
	head=createnode();
	putdata(head);
	node=head;
	while(getans())
	{
		node->link=createnode();
		node=node->link;
		putdata(node);
	}
	

showdata(head);
return 0;
}
	
	
	
	

	
	
	
	

