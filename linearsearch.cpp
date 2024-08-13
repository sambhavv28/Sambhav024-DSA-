#include<stdio.h>
int main(){
	int arr[100],i,n,key,pos,flag=0 ;
	printf("\n enter number of elements: ");
	scanf("%d",&n);
	printf("\n enter elements of array: ");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	printf("\n enter the number to be searched: ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		
		if(key==arr[i]){
			pos=i;
			flag=1;
			break;
		}
	}
		if(flag==1)
		printf("the number is in this list and it is present at location :%d",pos+1);
		else
		printf("key not found");
}
