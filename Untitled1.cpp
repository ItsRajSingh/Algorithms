#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};
void printdata(struct node *head)
{
	
	if(head==NULL)
	{
		printf("The linked list is empty");
	}
	struct node *ptr= NULL;
	ptr= head;
	while(ptr != NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}

}
void addatend(struct node *head, int value)
{
	struct node *ptr, *temp;
	ptr=head;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data= value;
	temp->link=NULL;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;
}


int main()
{
	struct node *head=NULL;
	struct node *ptr=NULL;
	
	ptr= (struct node*)malloc(sizeof(struct node));
	head = (struct node*)malloc(sizeof(struct node));
	
	head->data=45;
	head->link=ptr;
	ptr->data=98;
	ptr->link=NULL;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=3;
	
	ptr->link=NULL;
    head->link->link=ptr;
	
	printf("%d",head->data);
	printf("%d",head->link->data);
	printf("%d",ptr->data);
	printf("----------------------");
	
    //printf("Enter end value");
    //scanf("%d",value);
	addatend(head,7);
	
	printdata(head);
	return 0;
	
}


