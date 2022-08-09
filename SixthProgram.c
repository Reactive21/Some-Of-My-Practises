#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the first side length:");	
	scanf("%d",&a);
	printf("Enter the second side length:");	
	scanf("%d",&b);
	printf("Enter the third side length:");	
	scanf("%d",&c);
	
	if (a+b>c && a+c>b && b+c>a)
	{
	
	if (a==b && b==c)
	{
		printf("This is a equilateral triangle.");
	}
	else if (a==b || a==c||b==c)
	{
		printf("This is isosceles triangle.");
	}
	else
	{
		printf("This is a scolene triangle.");
	}
}
	else
	{
		printf("This is not a valid triangle.");
	}



	return 0;
}
