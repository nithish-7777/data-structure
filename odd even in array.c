#include<stdio.h>
int main(){
	int arr[100],i,n;
	printf("enter how many nymbers in an array");
	scanf("%d",&n);
	printf("enter %d elements in the array \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if (arr[i]%2==0){
			printf("%d is an even number \n",arr[i]);
		}
	}
	for(i=0;i<n;i++){
		if (arr[i]%2!=0){
			printf("%d is an odd number\n",arr[i]);
	    }
    }
}
