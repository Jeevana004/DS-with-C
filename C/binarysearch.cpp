#include<stdio.h>
//function to sort array(bubblsort)
void sort(int a[],int n){
	int i,j,temp;
	for (i=0;i<n-1;i++){
	for (j=0;j<n-i-1;j++){
		if (a[j]>a[j]){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		
	}
   }
 }
}
//function for binary search
int binarySearch(int a[],int n,int key){

    int low=0,high=n-1,mid;
    while(low<=high)
	{
        mid=(low+high)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]<key)
	        low=mid+1;
	    else
	       high=mid-1;
	}
		return -1;
}



int main(){
	int n,i,key,result;
	int a[100];
	
	printf("enter number of elements:");
	scanf("%d",&n);

printf("enter %d of elements(unsorted):\n",n);
for(i=0;i<n;i++)

{
	scanf("%d",&a[i]);
}
//sort the array
sort(a,n);
printf("sorted array: \n");
for(i=0;i<n;i++){

	printf("%d",a[i]);
}
printf("\n enter element to search:");
scanf("%d",&key);
result=binarySearch(a,n,key);
if(result!=-1)
  printf("element found at index %d(0-based index) \n",result);
else
  printf("element not found\n");
  return 0;
}

  
