#include<stdio.h>
#include<stdlib.h>
void heapify(int arr[],int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+1;
	if(left<n&&arr[left]>arr[largest])
	largest=left;
	if(right<n&&arr[right]>arr[largest])
	largest=right;
	if(largest!=i){
	int temp=arr[i];
	arr[i]=arr[largest];
	arr[largest]=temp;
	heapify(arr,n,largest);
		
	}
}
void heapsort(int arr[],int n){
	int i;
	for(i=n/2-1;i>=0;i--)
	heapify(arr,n,i);
	for(i=n-1;i>=0;i--){
	int temp=arr[0];
	arr[0]=arr[i];
	arr[i]=temp;
	heapify(arr,i,0);
}
}
void printarray(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}
int main(){
	int arr[50],n,i;
	printf("enter n values");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
heapsort(arr,n);
printf("sorted array:");
//for(int i=0;i<n;i++);
printarray(arr,n);
 
return 0;
}

