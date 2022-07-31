#include <stdio.h>

int main()
{
	int a,b,c,x,y,z;
	printf("Enter a value for x:");
	scanf("%d",&x);	
	printf("Enter a value for y:");
	scanf("%d",&y);
	printf("Enter a value for z:");
	scanf("%d",&z);
	
	
	
	if ((x>y)&&(x>z))
	{
        if (y>z)
        {
        	a=x;
        	b=y;
        	c=z;
		}
		else
		{
        	a=x;
        	c=y;
        	b=z;
        }
	}
	if ((x<y)&&(x<z))
	{
		if(y<z)
		{
			c=x;
			b=y;
			a=z;
		}
		else
		{
			c=x;
			a=y;
			b=z;
		}
	}
	if ((x>y)&&(x<z))
	{
		b=x;
		c=y;
		a=z;
	}
	if ((x<y)&&(x>z))
	{
		b=x;
		a=y;
		c=z;
	}
	
	printf("The numbers in order is this: a=%d, b=%d, c=%d",a,b,c);

	
	return 0;
}
