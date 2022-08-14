#include <stdio.h>

int sum(int n1,int n2){

	return (n1+n2);
}
int main(){
	int a,b;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);
	printf("Largest of these numbers is: %d",sum(a,b));
	
	
	
	
}
