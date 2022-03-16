#include<stdio.h>
int count=0;
int countVowels(char str[], int n)
{
    if(str[n]=='\0'){
        return;
    }
    if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'||str[n]=='A'||str[n]=='E'||str[n]=='I'||str[n]=='O'||str[n]=='U'){
        count=count+1;
        countVowels(str,n+1);
    }
    else{
    	countVowels(str,n+1);
	}
    return count;
    
}
int main()
{
	char str[10];
	printf("enter a string\n");
	scanf("%s",str);
	printf("%d",countVowels(str,0));
	return 0;
	
}
