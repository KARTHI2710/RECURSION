#include<stdio.h>
int isPalindrome(char str[], int start, int end)
{
    if(start==end/2){
        return 1;
    }
    if(str[start]==str[end]){
        return isPalindrome(str,start+1,end);

    }
    else{
        return 0;
    }
    
}
int main()
{
	char str[10];
	int len;
	printf("enter a string\n");
	scanf("%s",str);
	printf("%d",isPalindrome(str,0,len-1));
	return 0;
}
