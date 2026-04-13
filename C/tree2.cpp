#include<stdio.h>
#include<stdlib.h>
struct node {
struct node *left;
int data;
struct node *right;
};
struct node *root=NULL;
void insert(struct node *root1,int value);
void search(struct node *root2,int key);
void preorder(struct node *root4);
struct node *createNode(int value){
struct node *newNode=(struct node *)malloc(sizeof(struct node));
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct node * findmin(struct node * root){
while(root->left!=NULL)
     root=root->left;
     return root;
}
struct node * deletenode(struct node* root,int value)
 {
 if(root==NULL)
   return root;
 if(value<root->data)
   root->left=deletenode (root->left,value);
 else if(value>root->data)
   root->right=deletenode(root->right,value);
   else{
   if (root->left==NULL&&root->right==NULL)
   {
   free(root);
   return NULL;
}
else if(root->left==NULL){
 struct node*temp=root->right;
  free(root);
}
else
{
struct node*temp=findmin(root->right);
root->data=temp->data;
root->right=deletenode(root->right,temp->data);
}
}
return root;
}
int main(){
int choice,data,key;
while(1){
printf("1.for insertion\n 2.for searching\n 3.Delete node\n 4.peroder\n 5.exit\n");
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
    printf("Enter the data u want to delete\n");
    scanf("%d",&key);
    deletenode(root,key);
    break;
case 4:
    preorder(root);
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
void preorder(struct node *root4){
if(root4!=NULL){
printf("%d,",root4->data);
preorder(root4->left);
preorder(root4->right);
}
}
