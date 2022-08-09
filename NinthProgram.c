#include <stdio.h>

int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	
	if ((a % 5 ==0) && (a%11==0)544545122)
	{
		printf("This number is divisible by 5 and 11.");
	}
	else
	{
		printf("This number is not divisible by 5 and 11.");
	}
	return 0;
}
