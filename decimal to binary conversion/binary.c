#include<stdio.h>
void decimalToBinary(int num)
{
    if(num==1){
    	printf("%d",num);
        return; 
    }
    decimalToBinary(num/2);
    printf("%d",num%2);
}
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	decimalToBinary(n);
	return 0;
}
