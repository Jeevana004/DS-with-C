#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*front=Null;
struct Node*rear=Null;
void enqueue(){
	int value;
	struct Node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter a value\n");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=Null;
	if(front==Null){
		front=newnode;
		rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
	printf("%d is inserted\n",value);
}
void dequeue(){
	struct Node*temp;
	if(front==Null){
		printf("queue underflow\n");
		return;
	}
	temp=front;
	printf("%d deleted from the queue\n",temp->data);
	front=front->next;
	free(temp);
}
void peek(){
	if (front==Null){
		printf("queue is empty\n");
	}else{
		printf("front element is%d\n",front->data);
	}
}
void display(){
	struct node*temp=front;
	if(front==Null){
		printf("queue is empty\n");
		return;
	}
	printf("queue elements:");
	while(temp!=Null){
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	printf("\n");
}
int main(){
	int choice;
	while(1){
		printf("1.enqueue\n 2.dequue\n 3.peek()\n 4.display\n 5.exit\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		swtich(choice){
			case 1:enequeue();
			    break;
			case 2:dequeue();
			    break;
			case 3:peek();
			    break;
			case 4:display();
			    break;
			case 5:return 0;			     
		}
	}
}
}
