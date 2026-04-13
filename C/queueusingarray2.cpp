#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*rear=NULL;
struct node*front=NULL;
struct node*createnode(int value){
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
}
void enqueue(){
int value;
struct node*temp,*newnode;
if(front==NULL&&rear==NULL){
printf("enter data\n");
scanf("%d",&value);
newnode=createnode(value);
front=newnode;
rear=newnode;
}
else
{
temp=front;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
rear=newnode;
}
}
void dequeue(){
struct node*temp;
if(front==NULL&&rear==NULL)
printf("queue is empty\n");
else
{
temp=front;
front=front->next;
free(temp);
}
}
void display(){
struct node*temp=front;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void peek(){
	if(front==NULL && rear==NULL)
     printf("Queue is empty");
    else{
    	printf("The top most element:%d\n",front->data);
	}
}
int main(){
	int choice;
	while(1){
		 printf("1.Enqueue\n2.Dequeue\n3.Display\n4.peek\n5.Exit\n");
		 printf("Enter ur choice\n");
		 scanf("%d",&choice);
		 switch(choice){
		 	case 1:
		 		enqueue();
		 		break;
		 	case 2:
		 		dequeue();
		 		break;
		 	case 3:
		 		display();
		 		break;
		 	case 4:
		 		peek();
		 		break;
		 	case 5:
		 		return 0;
		 }
	}
}
