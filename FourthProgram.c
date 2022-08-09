#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the first side lenght:");	
	scanf("%d",&a);
	printf("Enter the second side length:");	
	scanf("%d",&b);
	printf("Enter the third side length:");	
	scanf("%d",&c);
	
	if (a+b>c && a+c>b && b+c>a)
	{
		printf("This is a valid triangle.");
	}
	else
	{
		printf("This is not a valid triangle.");
	}
	
	
	return 0;
}
