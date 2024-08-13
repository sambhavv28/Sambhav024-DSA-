#include<stdio.h>
int main(){
	int i,low,high,mid,n,key,arr[10];
	printf("\n enter the size of array:");
	scanf("%d",&n);
	printf("\n enter the elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n enter the number to be searched: ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high){
		if(arr[mid]<key)
		low=mid+1;
		else if(arr[mid]==key)
		{
			printf("%d found at location %d \n",key,mid+1);
			break;
		}
		else
		high=mid-1;
		mid=(low+high)/2;
	}
	if(low>high)
	printf("not found! %d is not present in this list");
}
