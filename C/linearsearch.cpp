#include<stdio.h>
int main()
{
	int i,n,key,arr[30],found=0;
	printf("enter n element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter key value");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
	if(arr[i]==key)
	   {	
           found=1;
	        break;
        }
	}
	if(found==1)
	{
		printf("element found in %d index position",i);
	}
	else
	{
	   	printf("element not found");	
	}
return 0;	
}

	
