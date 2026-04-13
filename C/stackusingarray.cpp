#include <stdio.h>
#define MAX 50
int stack[MAX];
int top=-1;
void push(){
	int value;
	if(top==MAX-1){
		printf("stack overflow!\n");
	}else{
		printf("enter value to push:");
		scanf("%d",&value);
		top++;
		stack[top]=value;
		printf("value pushed successfully.\n");
	}
}
void pop(){
	if (top==-1){
		printf("stack underflow!\n");
	}else{
	  printf("popped value:%d\n",stack[top]);
	  top--;
	}
}
void peek(){
	if(top==-1){
		printf("stack is empty\n");
	}else{
		printf("top element:%d\n",stack[top]);
	}
}
void display(){
	if(top==-1){
		printf("stack is empty\n");
	}else{
		printf("stack elements:\n");
		for(int i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}
int main(){
	int choice;
	while(1){
		printf("\n--stack menu--\n");
		printf("1.Push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.display\n");
		printf("5.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
			    pop();
				break;
		    case 3:
			    peek();
				break;
		    case 4:
			    display();
				break;
			case 5:
			    printf("exiting program.\n");
				return 0;
			default:
			    printf("invalid choice!Try again.\n");							
		}
	}
}
