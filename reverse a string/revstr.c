#include<stdio.h>
#include<string.h>
void reverse(char str[], int i, int n)
{
    if(str[i]=='\0'){
        return;
    }
    printf("%c",str[i]);
    reverse(str,i++,n);
    //printf("%c",str[i]);
}
int main()
{
	char str[10];
	int s=0,len;
	printf("enter a string\n");
	scanf("%s",str);
	len=strlen(str);
    reverse(str,s,len);
	return 0;
}
