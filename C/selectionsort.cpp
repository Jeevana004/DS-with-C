#include<stdio.h>
int main()
{
	int n,temp,i,j,arr[20];
	printf("enter the size of the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("before sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=i;j>0;j--){
			if(arr[j]<arr[j-1])
			{
				
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}

printf("\nelements after sorting\n");
for(i=0;i<n;i++){
	printf("%d\t",arr[i]);
}
return 0;
}
