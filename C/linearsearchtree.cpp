#include<stdio.h>
#include<string.h>
int main(){


    int choice;
    printf("choose data type for linear search:\n");
    printf("1.Integer\n");
    printf("2.Float\n");
    printf("3.character\n");
    printf("4.string\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    
    switch(choice){
    	//........integer.........
    case 1:{
    	int n,key,i,found=0;
    	printf("enter number of elements:");
    	scanf("%d",&n);
    	int arr[n];
    	printf("enter %d integers:\n",n);
    	for(i=0;i<n;i++)
    	    scanf("%d",&arr[i]);
    	printf("enter integer to search:");
		scanf("%d",&key);
	    for(i=0;i<n;i++){
	    	if(arr[i]==key){
	    		found=1;
	    		break;
			}
		}	    
		if(found)
		   printf("Integer found at position %d\n",i+1);
		else
		   printf("Integer not found.\n"); 
		break;     
	}	
	//..........float.................
	case 2:{
		int n,i,found=0;
		float key;
		printf("enter number of elements:");
		scanf("%d",&n);
		
		float arr[n];
		printf("enter %d float values:\n",n);
		for(i=0;i<n;i++)
		    scanf("%f",&arr[i]);
		printf("enter float value to search:");
		scanf("%f",&key);
		
		for(i=0;i<n;i++){
			if(arr[i]==key){
				found=1;
				break;
			} 
		}
		
	if(found)
	   printf("float value found at position%d\n",i+1);
	else
	printf("float value not found.\n");
	break;

	}
	//.....character.....
	case 3:{
		int n,i,found=0;
		char arr[100],key;
		printf("enter number of characters:");
		scanf("%d",&n);
		printf("enter %d characters:\n",n);
		for(i=0;i<n;i++)
		    scanf(" %c",&arr[i]);//space before %c is important
		printf("enter character to search:");
		scanf(" %c",&key);
		for(i=0;i<n;i++){
			if(arr[i]==key){
				found=1;
			  break;
			}
		}    
		if(found)
		   printf("character found at position %d\n",i+1);
		else
		   printf("character not found.\n");
		break;      
	}
	//.........string.........
	case 4:{
		int n,i,found=0;
		char arr[100][100],key[100];
		printf("enter number of strings:");
		scanf("%d",&n);
		printf("enter %d strings:\n",n);
		for(i=0;i<n;i++)
		    scanf("%s",arr[i]);
		printf("enter string to search:");
		scanf("%s",key);
		for(i=0;i<n;i++){
			if(strcmp(arr[i],key)==0){
				found=1;
				break;
			}
		}
		if(found)
		   printf("string found at position %d\n",i+1);
		else
		  printf("string not found.\n");
		break;
		         
}
default:
	printf("invalid choice!\n");
	}
	return 0;
}

