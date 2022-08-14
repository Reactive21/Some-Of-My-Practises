#include <stdio.h>

int largest(int n1,int n2, int n3){
	if (n1 >= n2 && n1 >= n3)
	return n1;

  if (n2 >= n1 && n2 >= n3)
  return n2;

  if (n3 >= n1 && n3 >= n2)
    return n3;
}
int main(){
	int a,b,c;
	printf("Enter three integers:");
	scanf("%d %d %d",&a,&b,&c);
	printf("Largest of these numbers is: %d",largest(a,b,c));
	
}
