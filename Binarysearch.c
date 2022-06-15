//Binary sesrch (only shorted array)
#include<stdio.h>
void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d   ",arr[i]);
	}
}
int binarysearch(int arr[],int n,int key){
	int l=0,h=n-1,mid;
	while(l<=h){
		mid=(l+h)/2;
		if(arr[mid]==key)
		return 1;
		else if(arr[mid]>key)
			h=mid-1;
			else
			l=mid+1;
		
	}
return 0;
}
int main(){
	int arr[100];
	int key,n,i,temp;
	printf("enter the array size: ");
	scanf("%d",&n);
	printf("enter %d element of the array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		display(arr,n);
	printf("enter searching element: ");
	scanf("%d",&key);
	if( binarysearch(arr ,n, key)==1)
	puts("yes");
	else
	puts("no");
}

