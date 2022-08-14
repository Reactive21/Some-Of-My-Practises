#include <stdio.h>
int main()
{
	char str[30];
	int len=0;
	printf("Enter a string:");
	gets(str);
	while(str[len]!='\0') len++;
	printf("The string %s has %d characters",str,len);
}
