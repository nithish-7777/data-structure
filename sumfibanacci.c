#include<stdio.h>
int main(){
	int n,i,a=0,b=1,c=0,sum=0,temp;
	printf("enter how many elements");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		sum=sum+a;
		c=a+b;
		a=b;
		b=c;
	}
	printf("the sum of fibanacci series is %d",sum);
	
}
