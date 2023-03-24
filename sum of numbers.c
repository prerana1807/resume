#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  int arr[5]={10,20,30,40,50};
  int i;
  int sum=0;
  for(i=0;i<5;i++)
  {
  	printf("\n%d",arr[i]);
  }
  for(i=0;i<5;i++)
  {
  	sum=sum+arr[i];
  }
  printf("\nsum of the numbers are : %d",sum);
	return 0;
}
