//linear search in language
#include<stdio.h>
void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
int Linearsearch(int arr[],int n,int key){
	     
		if(arr[i]==key){
            
        }
	
}
int main(){
	int arr[100];
	int key,n,i,temp;
	printf("enter the array size: ");
	scanf("%d",&n);
	printf("enter %d element of the array",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter searching element: ");
	scanf("%d",&key);

	if( Linearsearch(arr,n,key)==1)
{
		printf("element : %d is present: \n",key);
		display(arr,n);
	}
	else
		printf("element : %d is not present: \n",key);
	
}
