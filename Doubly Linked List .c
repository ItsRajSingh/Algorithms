#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
#define MAX 5
struct CQ
{
    int f,r,data[MAX],size;
};
 int isFull(struct CQ*s)
{
    return s->size==MAX?true:false;
}
int isEmpty(struct CQ*s)
{
    return s->size==0?true:false;
    
}
void enqueue(struct CQ*s,int element)
{
    s->r=(s->r+1)%MAX;
    s->data[s->r]=element;
    s->size+=1;
}
int dequeue(struct CQ *s)
{
    int ret=s->data[s->f];
    s->f=(s->f+1)%MAX;
    s->size-=1;
}
int checkFront(struct CQ*s)
{
    return s->data[s->f];
}
int checkrear(struct CQ*s)
{
    return s->data[s->r];
}

int main()
{
    int value,choice;
    struct CQ q;
    do{
        printf("1)ENQUEUE\n2)DEQUEUE\n3)CheckFront\n4)CheckRear\n5)EXIT");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            if(isFull(&q)){
                printf("Queue is Full");
            }
            else
            {
                printf("Enter the element to be inserted: ");
                scanf("%d",&value);
                enqueue(&q,value);
                printf("%d was enqueued\n",value);
            }
            break;
            case 2:
            if(isEmpty(&q))
            {
                printf("The Queue is empty\n");
            }
            else
            {
                
                printf("%d was dequeued\n",dequeue(&q));
            }
            break;
            case 3:
            printf("The front element is %d",checkFront(&q));
            break;
            case 4:
            printf("The rear element is %d",checkrear(&q));;
            break;
            case 5:
            printf("Self destruct in 3......2.......1. Just Kidding Bye");
            break;
            default:
            printf("Wrong choice");
            break;
            
            }
        }while(choice!=5);
    
}
