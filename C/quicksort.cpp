#include<stdio.h>

int partion (int arr[],int low,int high)
{
	int temp;
	int pivot=arr[(low+high)/2];
	while(low<=high){
		while(arr[low]<pivot){
			low++;
		}
		while(arr[high]>pivot){
			high--;
		}
		if(low<=high){
			int temp=arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
			low++;
			high--;
		}
	}
	return low;
}
void quicksortrecursion(int arr[],int low,int high){
	int pi=partion(arr,low,high);
	if(low<pi-1){
		quicksortrecursion(arr,low,pi-1);
	}
	if(pi<high){
		quicksortrecursion(arr,pi,high);
	}
}

void printarray(int arr[],int length){
	int i;
	for(i=0;i<length;i++){
	 printf("%d\t",arr[i]);
	 
}
printf("\n");
}
int main(){
	int n,i,arr[40];
	printf("enter the numbers\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	quicksortrecursion(arr,0,n-1);
	printarray(arr,n);
	return 0;
}
