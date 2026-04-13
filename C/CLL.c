#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void createList();
void display();
void insertAtBeginning();
void insertAtEnd();
void insertAtSpecified();
void deleteAtBeginning();
void deleteAtEnd();
void deleteAtSpecified();
int main()
{
int choice;
while(1){
printf("1.Create List\n 2.Display\n 3.Insert At Beginning\n 4.Insert At End\n 5.Insert At Specified\n 6.Delete At Beginning\n 7.Delete At End\n 8.Delete At Specified\n9.exit\n");
printf("Enter ur choice\n");
scanf("%d",&choice);
switch(choice){
case 1:
   createList();
   break;
case 2:
    display();
    break;
case 3:
     insertAtBeginning();
     break;
case 4:
    insertAtEnd();
    break;
case 5:
    insertAtSpecified();
    break;
case 6:
    deleteAtBeginning();
    break;
case 7:
     deleteAtEnd();
     break;
case 8:
    deleteAtSpecified();
    break;
case 9:
    return 0;
default:
 printf("Enter valid choice\n");
 }
 }
}

void createList(){
struct node *newNode,*ptr;
int n,i;
printf("Enter the no of nodes \n");
scanf("%d",&n);
for(i=0;i<n;i++){
newNode=(struct node *)malloc(sizeof(struct node));
if(newNode ==NULL){
printf("UnderFlow\n");
exit(0);
}
printf("Enter node data\n");
scanf("%d",&newNode->data);
if(head==NULL){
head=newNode;
newNode->next=head;
}
else{
ptr=head;
while(ptr->next!=head){
ptr=ptr->next;
}
ptr->next=newNode;
newNode->next=head;
}
printf("Node inserted\n");
}
}
void display(){
struct node *ptr=head->next;
printf("Printing value...\n");
printf("%d->",head->data);
while(ptr!=head){
printf("%d->",ptr->data);
ptr=ptr->next;
}
}
void insertAtBeginning(){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
struct node *ptr=head;
if(newnode==NULL){
printf("UnderFlow\n");
exit(0);
}
printf("Enter node data\n");
scanf("%d",&newnode->data);
while(ptr->next!=head){
ptr=ptr->next;
}
newnode->next=head;
head=newnode;
ptr->next=head;
}
void insertAtEnd(){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
struct node *ptr=head;
if(newnode==NULL){
printf("UnderFlow\n");
exit(0);
}
printf("Enter node data\n");
scanf("%d",&newnode->data);
while(ptr->next!=head){
ptr=ptr->next;
}
ptr->next=newnode;
newnode->next=head;
}
void insertAtSpecified(){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
struct node *ptr=head,*ptr1;
int pos,i;
if(newnode==NULL){
printf("UnderFlow\n");
exit(0);
}
printf("Enter node data\n");
scanf("%d",&newnode->data);
printf("Enter the position\n");
scanf("%d",&pos);
for(i=0;i<pos;i++){
ptr1=ptr;
ptr=ptr->next;
}
ptr1->next=newnode;
newnode->next=ptr;
}

void deleteAtBeginning(){
struct node *ptr,*temp;
ptr=head;
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
head=ptr->next;
free(ptr);
temp->next=head;
}

void deleteAtEnd(){
struct node *ptr=head;
while(ptr->next->next!=head){
ptr=ptr->next;
}
free(ptr->next);
ptr->next=head;
}
void deleteAtSpecified()
{
struct node *ptr=head,*ptr1;
int pos,i;
printf("Enter the position\n");
scanf("%d",&pos);
for(i=0;i<pos;i++){
ptr1=ptr;
ptr=ptr->next;
}
ptr1->next=ptr->next;
free(ptr);
}
