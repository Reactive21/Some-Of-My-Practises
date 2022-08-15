#include <stdio.h>
int main()
{
 int arr[]={0,1,-2,-3,4,5,6,7,8,-2,-4,-3,-5,-1,-6,-7};
 int arr1[16];
 int i,n,negative;
 n=sizeof(arr)/sizeof(int);
 for(i=0;i<n;i++)
 {
 	arr1[i]=arr[i];
 }
 for(i=0;i<n;i++)
 {
 printf("Second array is: %d \n",arr1[i]);
 		
 }
 return 0;
}
