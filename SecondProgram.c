#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the value you want to check if it is leap year or not:");	
	scanf("%d",&a);
	
	if (a>0)
	{
	if (a%4==0&&a%100==0)
	{
		if(a%400==0)
		{
			printf("This year is a leap year.");
		}
		else
		{
			printf("This year is not a leap year.");
		}
	}
	else
	{
		printf("This year is not a leap year.");
	}
}
	else
	{
		printf("Enter a positive value:");
	}
	
	
	
		
	return 0;
}W
