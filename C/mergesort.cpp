#include<stdio.h>
void merge(int arr[],int start,int mid,int end){

	int len1=mid-start+1;
	int len2=end-mid;
	int leftarr[len1];
	int rightarr[len2];
	int i,j,k;
	for(i=0;i<len1;i++)
	{
		leftarr[i]=arr[start+i];
	}
	for(j=0;j<len2;j++)
	{
		rightarr[j]=arr[mid+1+j];
		
}
i=0;
j=0;
k=start;
while(i<len1&&j<len2)
{
	if(leftarr[j]<rightarr[j])
	{
		arr[k]=leftarr[i];
		i++;
	}
	else
	{
		arr[k]=rightarr[j];
		j++;
	}
	k++;
}
while(i<len1)
{
	arr[k]=leftarr[i];
	i++;
	k++;
}
while(j<len2)
{
	arr[k]=rightarr[j];
	j++;
	k++;
}
}
void merge_sort(int arr[],int start,int end){
	int mid;
	if (start<end){
		mid=(start+end)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,start,mid,end);
		
}
}
int main(){
	int arr[30],n,i;
	printf("enter no of elements: ");
	scanf("%d ",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
}
printf("After sorting\n");
merge_sort(arr,0,n-1);
//printf("array values after sorting,int end");
for(i=0;i<n;i++){
	printf("%d \t",arr[i]);
}
return 0;
}

























































