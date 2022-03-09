#include<stdio.h>
int sum(int n){
	if(n==1){
		return n;
	}
	return n+sum(n-1);
}
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("sum of %d number is = %d\n",n,sum(n));
	return 0;
}
