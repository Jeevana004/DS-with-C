
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
struct node *left;
int data;
struct node *right;
};
struct node *root=NULL;
void insert(struct node *root1,int value);
void search(struct node *root2,int key);
void preorder(struct node *root3);
struct node *createNode(int value){
struct node *newNode=(struct node *)malloc(sizeof(struct node));
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct node *findmin(struct node* root5){
while(root5->left!=NULL){
root5=root5->left;
}
return root5;
}
struct node *deleteNode(struct node *root4,int value){
struct node *temp;
if (root4==NULL){
 return root4;
}
if(value<root4->data){
root4->left=deleteNode(root4->left,value);
}
else if(value>root4->data){
root4->right=deleteNode(root4->right,value);
}
else{
if(root4->left==NULL && root4->right==NULL){
temp=root4->right;
free(root4);
return temp;
}
else{
temp=findmin(root4->left);
root4->data=temp->data;
root4->right=deleteNode(root4->right,temp->data);
}
}
}
int main(){
int choice,data,key;
while(1){
printf("\n1.for insertion\n 2.for searching\n 3.preorder Traversal\n 4.delete\n 5.exit\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
      printf("enter node data\n");
      scanf("%d",&data);
      insert(root,data);
      break;
case 2:
     printf("Enter the key value u want to search");
     scanf("%d",&key);
     search(root,key);
     break;
case 3:
    preorder(root);
    break;
case 4:
	printf("Enter the value u want to delete\n");
	scanf("%d",&data);
	deleteNode(root,data);
	break;
case 5:
    return 0;
    }
    }
    }
void insert(struct node *root1,int value){
if(root1==NULL){
root=createNode(value);
return;
}
if(root1->data >value)
{
if(root1->left ==NULL){
	 root1->left=createNode(value);
}
else{
insert(root1->left,value);
}
}
else
{
if(root1->right==NULL){
root1->right=createNode(value);
}
else{
insert(root1->right,value);
}
}
}
void search(struct node *root2,int key){
if(root2==NULL){
exit(0);
}
if(root2->data==key){
printf("Element found\n");
return;
}
if(root2->data > key)
{
search(root2->left,key);
}
else{
search(root2->right,key);
}
}
void preorder(struct node *root3){
if(root3!=NULL){
printf("%d,", root3->data);
preorder(root3->left);
preorder(root3->right);
}
}

