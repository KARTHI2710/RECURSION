#include<stdio.h>
int mod(int num, int den)
{
    if(num < den)
        return num;

    return mod(num-den,den);
}
int main(){
	int n,d;
	printf("enter a numerator and denominator\n");
	scanf("%d %d",&n,&d);
	printf("%d",mod(n,d));
	return 0;
}
